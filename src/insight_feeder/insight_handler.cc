#include "insight_handler.h"
#include "config.h"
#include "cpu_manager.h"

namespace co {
    InsightHandler::InsightHandler() : queue_(60000) {
    }

    InsightHandler::~InsightHandler() {
    }

    void InsightHandler::ClearQueryStatus() {
        query_over_ = false;
        query_error_ = "";
    }

    string InsightHandler::WaitQueryStatus() {
        while (!query_over_) {
            x::Sleep(10);
        }
        return query_error_;
    }

    void InsightHandler::OnServiceMessage(const ::com::htsc::mdc::insight::model::MarketDataStream& ds) {
        // pass
    }

    void InsightHandler::Start() {
        thread_ = std::make_shared<std::thread>(std::bind(&InsightHandler::Run, this));
    }

    void InsightHandler::Run() {
        BindCPU();
        while (true) {
            com::htsc::mdc::insight::model::MarketData* out;
            while (true) {
                if (queue_.pop(out)) {
                    break;
                }
            }
            if (!out) {
                continue;
            }
            const com::htsc::mdc::insight::model::MarketData& data = *out;
            switch (data.marketdatatype()) {
                case MD_CONSTANT:
                {//静态信息
                    if (data.has_mdconstant()) {
                        const MDBasicInfo& p = data.mdconstant();
                        string insight_code = p.htscsecurityid();
                        QContextPtr ctx = QServer::Instance()->GetContext(insight_code);
                        if (!ctx) {
                            string std_code = insight_code;
                            ctx = QServer::Instance()->NewContext(insight_code, std_code);
                        }
                        string name = p.symbol();
                        try {
                            name = x::GBKToUTF8(name);
                        } catch (...) {
                            // pass
                        }
                        co::fbs::QTickT& tick = ctx->tick();
                        tick.name = name;
                    }
                    break;
                }
                case MD_TICK: {//快照
                    if (data.has_mdstock()) {//股票
                        const MDStock& p = data.mdstock();
                        // LOG_INFO << p.Utf8DebugString();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdbond()) {//债券
                        const MDBond& p = data.mdbond();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdindex()) {//指数
                        const MDIndex& p = data.mdindex();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdfund()) {//基金
                        const MDFund& p = data.mdfund();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdoption()) {//期权
                        const MDOption& p = data.mdoption();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdfuture()) {//期货
                        const MDFuture& p = data.mdfuture();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQTick(raw);
                        }
                    } else if (data.has_mdforex()) {//外汇
                        /* std::string security_type = get_security_type_name(data.mdforex().securitytype());
                         save_debug_string(base_forder_, data_type, security_type,
                             data.mdforex().htscsecurityid(), data.mdforex().ShortDebugString());*/
                    } else if (data.has_mdspot()) {//现货
                        /* std::string security_type = get_security_type_name(data.mdspot().securitytype());
                         save_debug_string(base_forder_, data_type, security_type,
                             data.mdspot().htscsecurityid(), data.mdspot().ShortDebugString());*/
                    }
                    break;
                }
                case MD_ORDER:
                {//逐笔委托
                    if (data.has_mdorder()) {
                        const MDOrder& p = data.mdorder();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQOrder(raw);
                        }
                        //std::string security_type = get_security_type_name(data.mdorder().securitytype());
                        //save_debug_string(base_forder_, data_type, security_type,
                        //    data.mdorder().htscsecurityid(), data.mdorder().ShortDebugString());
                    }
                    break;
                }
                case MD_TRANSACTION:
                { //逐笔成交
                    if (data.has_mdtransaction()) {
                        const MDTransaction& p = data.mdtransaction();
                        string raw = Parse(p);
                        if (!raw.empty()) {
                            QServer::Instance()->PushQKnock(raw);
                        }
                    }
                    break;
                }
                default:
                    break;
            }
            delete out;
        }
    }

    void InsightHandler::OnMarketData(const com::htsc::mdc::insight::model::MarketData& data1) {
        // 测试序列化与反序列化的保存
//        std::string str_data;
//        data1.SerializeToString(&str_data);
//        com::htsc::mdc::insight::model::MarketData data;
//        data.ParseFromString(str_data);
//        com::htsc::mdc::insight::model::MarketData data;
//        data.CopyFrom(data1);

//        vector<com::htsc::mdc::insight::model::MarketData> data_vec;
//        com::htsc::mdc::insight::model::MarketData data2;
//        data2.CopyFrom(data1);
//        data_vec.push_back(data2);
//        const com::htsc::mdc::insight::model::MarketData& data = data_vec[0];

        com::htsc::mdc::insight::model::MarketData* item = new com::htsc::mdc::insight::model::MarketData;
        (*item).CopyFrom(data1);
        queue_.push(item);
        return;
    }

    void InsightHandler::OnPlaybackPayload(const PlaybackPayload& payload) {
        const MarketDataStream& stream = payload.marketdatastream();
        google::protobuf::RepeatedPtrField<com::htsc::mdc::insight::model::MarketData>::const_iterator it
            = stream.marketdatalist().marketdatas().begin();
        while (it != stream.marketdatalist().marketdatas().end()) {
            OnMarketData(*it);
            ++it;
        }
    }

    void InsightHandler::OnPlaybackStatus(const com::htsc::mdc::insight::model::PlaybackStatus& status) {
        LOG_INFO << "OnPlaybackStatus: " << status.Utf8DebugString();
    }

    void InsightHandler::OnQueryResponse(const ::com::htsc::mdc::insight::model::MDQueryResponse& response) {
        if (!response.issuccess()) {
            stringstream ss;
            ss << response.errorcontext().errorcode() << "-" << response.errorcontext().message();
            LOG_ERROR << "OnQueryResponse error: " << ss.str();
            query_over_ = true;
        } else {
            const MarketDataStream& stream = response.marketdatastream();
            google::protobuf::RepeatedPtrField<com::htsc::mdc::insight::model::MarketData>::const_iterator it
                = stream.marketdatalist().marketdatas().begin();
            while (it != stream.marketdatalist().marketdatas().end()) {
                OnMarketData(*it);
                ++it;
            }
            if (stream.isfinished() == 1) {
                query_over_ = true;
            }
        }
    }

    void InsightHandler::OnLoginSuccess() {
        LOG_INFO << "login success";
    }

    void InsightHandler::OnLoginFailed(int error_no, const std::string& message) {
        LOG_ERROR << "login failed: " << error_no << "-" << message;
    }

    void InsightHandler::OnNoConnections() {
        // 处理所有服务器都无法连接的情况
        LOG_INFO << "OnNoConnections";
    }

    void InsightHandler::OnReconnect() {
        LOG_INFO << "reconnect ...";
    }


}
