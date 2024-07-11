#include "insight_server.h"
#include <filesystem>
#include <fstream>
#include <sstream>
#include <regex>
#include <filesystem>
namespace fs = std::filesystem;

namespace co {

    void InsightServer::Run() {
        QOptionsPtr opt = Config::Instance()->opt();
        QServer::Instance()->Init(opt);
        QServer::Instance()->Start();
        // ------------------------------------------------------------
        int apilog_flag = Config::Instance()->apilog_flag();
        int compress_flag = Config::Instance()->compress_flag();

        if (apilog_flag) {
            open_file_log();  // api日志输出到文件
        } else {
            close_file_log();
        }

        init_env();
        set_int_property_value(HTSC_INSIGHT_CONFIG_THREAD_SLEEP_TIME, 0);
        open_trace();
        open_response_callback();
        open_double_select();
        // SDK默认进行解压缩，互联网用户无需配置
        if (compress_flag == 0) {
            close_compress();
        }

        client_ = ClientFactory::Instance()->CreateUdpClient();
        if (!client_) {
            LOG_FATAL << "create insight udp client failed";
            ClientFactory::Uninstance();
            client_ = NULL;
            return;
        }
        QueryContracts();
        handler_ = new InsightHandler();
        handler_->Start();
        client_->SetWorkPoolThreadCount(5);
        client_->RegistHandle(handler_);
        Login();
        SubQuotation();
        LOG_INFO << "server startup successfully";
        // ------------------------------------------------------------
        QServer::Instance()->Wait();
        Stop();
        QServer::Instance()->Stop();
    };

    void InsightServer::Stop() {
        ClientFactory::Uninstance();
        client_ = nullptr;
        delete handler_;
        handler_ = nullptr;
    }

    void InsightServer::Login() {
        string server_host = Config::Instance()->server_host();
        int server_port = Config::Instance()->server_port();
        string username = Config::Instance()->username();
        string password = Config::Instance()->password();
        LOG_INFO << "login ...";
        //添加备用发现网关地址
        std::map<std::string, int> backup_list;
        string server_host_1 = Config::Instance()->server_host_1();
        int server_port_1 = Config::Instance()->server_port_1();
        if (!server_host_1.empty() && server_port_1 > 0) {
            __info << "add back udp address: " << server_host_1;
            backup_list.insert(std::pair<std::string, int>(server_host_1, server_port_1));
        }
        while (true) {
            int rc = client_->LoginById(server_host, server_port, username, password, backup_list);
            if (rc == 0) {
                break;
            }
            error_print("LoginById failed");
            LOG_ERROR << "login failed: " << get_error_code_value(rc) << ", retry in 3s ...";
            x::Sleep(3000);
        }
    }

    void InsightServer::QueryContracts() {
        // 查询静态信息
        string static_dir = Config::Instance()->static_dir();
        if (!std::filesystem::exists(static_dir)) {
            __info << "dir not exit, " << static_dir;
            return;
        }
        string file;
        {
            vector<string> filenames;
            // huatai_static_data_20221111.csv
            const std::regex re(R"(^huatai_static_data_(\d{8}).csv)");
            for (const fs::directory_entry& p : fs::directory_iterator(static_dir)) {
                string filename = p.path().string();
                __info << filename;
                string basename = p.path().filename().string();
                std::smatch m;
                bool ok = std::regex_match(basename, m, re);
                if (ok) {
                    filenames.push_back(filename);
                }
            }
            std::sort(filenames.begin(), filenames.end(), std::greater<string>());
            if (!filenames.empty()) {
                file = filenames.front();
                __info << "read static file: " << file;
            } else {
                __info << static_dir << " is empty dir";
                return;
            }
        }
        std::fstream infile;
        infile.open(file, std::ios::in);
        if (!infile.is_open()) {
            std::cout << "open file " << file << " failed! " << std::endl;
            return;
        }
        std::vector<std::string> data;
        std::string s;
        while (std::getline(infile, s)) {
            data.push_back(s);
        }
        std::vector<int64_t> all_diff;
        for (auto& it : data) {
            auto pos = it.find("HTSCSecurityID");
            if (pos == it.npos) {
                string& line = it;
                std::vector<std::string> fields;
                x::Split(&fields, line, ",");
                if (fields.size() == 22) {
                    int i = 0;
//                    LOG_INFO << "HTSCSecurityID: " << fields[i++]
//                             << ", Symbol: " << fields[i++]
//                             << ", SecurityIDSource: " << fields[i++]
//                             << ", SecurityType: " << fields[i++]
//                             << ", ListDate: " << fields[i++]
//                             << ", TickSize: " << fields[i++]
//                             << ", ExchangeSymbol: " << fields[i++]
//                             << ", OptionUnderlyingSecurityID: " << fields[i++]
//                             << ", OptionUnderlyingSymbol: " << fields[i++]
//                             << ", OptionCallOrPut: " << fields[i++]
//                             << ", OptionTickSize: " << fields[i++]
//                             << ", OptionExercisePrice: " << fields[i++]
//                             << ", OptionStartDate: " << fields[i++]
//                             << ", OptionEndDate: " << fields[i++]
//                             << ", OptionExerciseDate: " << fields[i++]
//                             << ", OptionDeliveryDate: " << fields[i++]
//                             << ", VolumeMultiple: " << fields[i++]
//                             << ", CreateDate: " << fields[i++]
//                             << ", ExpireDate: " << fields[i++]
//                             << ", StartDelivDate: " << fields[i++]
//                             << ", EndDelivDate: " << fields[i++];
                    int securitytype = atoi(fields[3].c_str());
                    double ticksize = atof(fields[5].c_str());
                    double optionticksize = atof(fields[10].c_str());
                    if (securitytype == ESecurityType::OptionType || securitytype == ESecurityType::FuturesType) {
                        if (ticksize <= 0 && optionticksize <= 0) {
                            LOG_INFO << "not need static info";
                            continue;
                        }
                    }
                    string code = x::Trim(fields[0].c_str());
                    string std_code;
                    int8_t market = 0;
                    TransfromCode(code, std_code, market); // 上海、深圳、CSI、CNI，code = std_code
                    if (std_code.length() > 0) {
                        QContextPtr ctx = QServer::Instance()->GetContext(code);
                        if (!ctx) {
                            string name = x::Trim(fields[1].c_str());
                            ctx = QServer::Instance()->NewContext(code, std_code);
                            co::fbs::QTickT &tick = ctx->tick();
                            tick.name = name;
                            if (securitytype == ESecurityType::OptionType ||
                                securitytype == ESecurityType::FuturesType) {
                                if (securitytype == ESecurityType::FuturesType) {
                                    tick.dtype = kDTypeFuture;
                                    tick.price_step = ticksize;
                                    tick.multiple = atoll(fields[17].c_str());
                                    tick.create_date = atoll(fields[18].c_str());
                                    tick.expire_date = atoll(fields[19].c_str());
                                    tick.start_settle_date = atoll(fields[20].c_str());
                                    tick.end_settle_date = atoll(fields[21].c_str());
                                } else {
                                    tick.dtype = kDTypeOption;
                                    tick.price_step = optionticksize;
                                    // 没有createdate, yong optionstartdate
                                    tick.create_date = atoll(fields[12].c_str());
                                    tick.expire_date = atoll(fields[13].c_str());
                                    tick.start_settle_date = atoll(fields[15].c_str());
                                    tick.end_settle_date = atoll(fields[13].c_str());

                                    tick.exercise_date = atoll(fields[14].c_str());
                                    tick.exercise_price = atof(fields[11].c_str());
                                    string suffix = Market2Suffix(market);
                                    tick.underlying_code = x::Trim(fields[7].c_str()) + suffix;
                                    tick.cp_flag = x::Trim(fields[9].c_str()) == "C" ? kCpFlagCall : kCpFlagPut;
                                    tick.multiple = atoll(fields[16].c_str());
                                }
                                tick.list_date = atoll(fields[4].c_str());
                                __info << ToString(tick);
                            }
                        }
                    }
                }
            }
        }
    }

    void InsightServer::SubQuotation() {
        // 订阅行情
        LOG_INFO << "sub quotation ...";
        ESubscribeActionType action_type = COVERAGE;
        std::unique_ptr<SubscribeBySourceType> subscribe_all(new SubscribeBySourceType());

        // std::unique_ptr<SubscribeAll> subscribe_all(new SubscribeAll());
        QOptionsPtr opt = Config::Instance()->opt();

        //* 根据证券数据来源订阅行情数据, 由三部分确定行情数据
        //* 行情源(SecurityIdSource) :XSHG(沪市) | XSHE(深市) | ...，不填默认全选
        //* 证券类型(SecurityType) : BondType(债) | StockType(股) | FundType(基) | IndexType(指) | OptionType(期权) | ...
        //* 数据类型(MarketDataTypes) : MD_TICK(快照) | MD_TRANSACTION(逐笔成交) | MD_ORDER(逐笔委托) | ...
        if (opt->enable_spot()) {
            SetSubInfo(*subscribe_all, MD_TICK, StockType);
            SetSubInfo(*subscribe_all, MD_TICK, FundType);
            SetSubInfo(*subscribe_all, MD_TICK, BondType);
            SetSubInfo(*subscribe_all, MD_TICK, IndexType);
        }
        // 只保留中金所的期权、期货
        if (opt->enable_future()) {
            SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(CCFX);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        // 只保留上交所、深交所、中金所的期权
        if (opt->enable_option()) {
            {
                SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(XSHG);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
            {
                SubscribeBySourceTypeDetail *detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType *sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(XSHE);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
            {
                SubscribeBySourceTypeDetail* detail = subscribe_all->add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(CCFX);
                sub_info->set_securitytype(OptionType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
        }
        if (opt->enable_order()) {
            SetSubInfo(*subscribe_all, MD_ORDER, StockType);
            SetSubInfo(*subscribe_all, MD_ORDER, FundType);
            SetSubInfo(*subscribe_all, MD_ORDER, BondType);
            SetSubInfo(*subscribe_all, MD_ORDER, IndexType);
        }
        if (opt->enable_knock()) {
            SetSubInfo(*subscribe_all, MD_TRANSACTION, StockType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, FundType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, BondType);
            SetSubInfo(*subscribe_all, MD_TRANSACTION, IndexType);
        }

//        SubscribeBySourceTypeDetail *detail_2 = subscribe_all->add_subscribebysourcetypedetail();
//        SecuritySourceType *security_source_type_2 = new SecuritySourceType();
//        security_source_type_2->set_securityidsource(XSHE);
//        security_source_type_2->set_securitytype(StockType);
//        detail_2->set_allocated_securitysourcetypes(security_source_type_2);
//        detail_2->add_marketdatatypes(MD_TICK);
//        detail_2->add_marketdatatypes(MD_TRANSACTION);
//        detail_2->add_marketdatatypes(MD_ORDER);
        string interface_ip = Config::Instance()->interface_ip();
        __info << "interface_ip: " << interface_ip;
        while (true) {
            int rc = client_->SubscribeBySourceType(interface_ip, &(*subscribe_all));
            // int rc = client_->SubscribeAll(interface_ip);
            if (rc == 0) {
                LOG_INFO << "sub quotation ok";
                break;
            }
            LOG_ERROR << "sub quotation failed: " << get_error_code_value(rc) << ", retry in 3s ...";
            x::Sleep(3000);
        }
    }

    void InsightServer::SetSubFuture(SubscribeBySourceType& sub) {
        // CCFX 中国金融期货交易所, XSGE 上海期货交易所 INE
        // XDCE 大连商品交易所, XZCE 郑州商品交易所
        {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(CCFX);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XSGE);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(INE);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XZCE);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
        {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XDCE);
            sub_info->set_securitytype(FuturesType);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(MD_TICK);
        }
    }

    void InsightServer::SetSubInfo(SubscribeBySourceType& sub, const EMarketDataType& dtype, const ESecurityType& stype) {
        int market = Config::Instance()->market();
        // XSHG(沪市)|XSHE(深市)
        if (market == 0 || market == 1) {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XSHG);
            sub_info->set_securitytype(stype);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(dtype);
        }

        if (market == 0 || market == 2) {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XSHE);
            sub_info->set_securitytype(stype);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(dtype);
        }
        if (market == 0) {
            SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
            SecuritySourceType* sub_info = new SecuritySourceType();
            sub_info->set_securityidsource(XBSE);
            sub_info->set_securitytype(stype);
            detail->set_allocated_securitysourcetypes(sub_info);
            detail->add_marketdatatypes(dtype);
        }

        // CNI CSI指数需要这样订阅
        if (stype == IndexType) {
            {
                SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(CNI);
                sub_info->set_securitytype(IndexType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }

            {
                SubscribeBySourceTypeDetail* detail = sub.add_subscribebysourcetypedetail();
                SecuritySourceType* sub_info = new SecuritySourceType();
                sub_info->set_securityidsource(CSI);
                sub_info->set_securitytype(IndexType);
                detail->set_allocated_securitysourcetypes(sub_info);
                detail->add_marketdatatypes(MD_TICK);
            }
        }
    }
}

