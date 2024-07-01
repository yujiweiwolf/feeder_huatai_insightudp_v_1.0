#include "insight_support.h"
#include "define.h"

namespace co {
    int8_t BsFlag2Std(const int32_t& _bs_flag) {
        int8_t bs_flag = 0;
        switch (_bs_flag) {
        case 1:
        case 3:
            bs_flag = kBsFlagBuy;
            break;
        case 2:
        case 4:
            bs_flag = kBsFlagSell;
            break;
        default:
            // LOG_ERROR << "unknown insight_bs_flag: " << bs_flag;
            break;
        }
        return bs_flag;
    }

    int8_t OrderType2Std(const int32_t& _order_type) {
        int8_t order_type = 0;
        switch (_order_type) {
        case 1:
            order_type = kQOrderTypeMarket;
            break;
        case 2:
            order_type = kQOrderTypeLimit;
            break;
        case 3:
            order_type = kQOrderTypeSelfMarket;
            break;
        case 10:
            order_type = kQOrderTypeWithdraw;
            break;    
        default:
            // LOG_ERROR << "unknown insight_order_type: " << _order_type;
            break;
        }
        return order_type;
    }

    int8_t Status2Std(const string& _status) {
        int8_t state = kStateOK;
        if (_status == "8") {
            state = kStateSuspension;
        } else if (_status == "9") {
            state = kStateBreak;
        }
        return state;
    }

    void TransfromCode(const string& code, string& std_code, int8_t& market) {
        auto it = code.find(".");
        if (it == code.npos) {
            LOG_ERROR << "not valid code: " << code;
            return;
        }
        string instrument = code.substr(0, it);
        if (instrument.empty()) {
            LOG_ERROR << "not valid code: " << code;
            return;
        }
        string perfix = code.substr(it + 1);
        if (perfix == "CF") {
            std_code = instrument + kSuffixCFFEX;
            market = kMarketCFFEX;
        } else if (perfix == "SHF") {
            std_code = instrument + kSuffixSHFE;
            market = kMarketSHFE;
        } else if (perfix == "INE") {
            std_code = instrument + kSuffixINE;
            market = kMarketINE;
        } else if (perfix == "DCE") {
            std_code = instrument + kSuffixDCE;
            market = kMarketDCE;
        } else if (perfix == "ZCE") {
            std_code = instrument + kSuffixCZCE;
            market = kMarketCZCE;
        } else if (perfix == "SH") {
            std_code = instrument + kSuffixSH;
            market = kMarketSH;
        } else if (perfix == "SZ") {
            std_code = instrument + kSuffixSZ;
            market = kMarketSZ;
        } else if (perfix == "CNI") {
            std_code = instrument + kSuffixCNI;
            market = kMarketCNI;
        } else if (perfix == "CSI") {
            std_code = instrument + kSuffixCSI;
            market = kMarketCSI;
        } else if (perfix == "BJ") {
            std_code = instrument + kSuffixBJ;
            market = kMarketBJ;
        } else {
            std_code = "";
            market = 0;
        }
    }

    int64_t Market2Std(::com::htsc::mdc::model::ESecurityIDSource source) {
        int64_t market = 0;
        switch (source) {
            case XSHE:
                market = kMarketSZ;
                break;
            case XSHG:
                market = kMarketSH;
                break;
            case CCFX:
                market = kMarketCFFEX;
                break;
            case XSGE:
                market = kMarketSHFE;
                break;
            case INE:
                market = kMarketINE;
                break;
            case XDCE:
                market = kMarketDCE;
                break;
            case XZCE:
                market = kMarketCZCE;
                break;
            case XHKG:
                market = kMarketHK;
                break;
            case CSI:
                market = kMarketCSI;
                break;
            case CNI:
                market = kMarketCNI;
                break;
            case XBSE:
                market = kMarketBJ;
                break;
            default:
                LOG_ERROR << "not valid source: " << source;
                break;
        }
        return market;
    }

    string Parse(const MDStock& p) {
        string code = p.htscsecurityid();
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeStock;
            m.src = kSrcQTickLevel2; // ����Դ
        }
        m.pre_close = i2f(p.preclosepx()); // ���ռ�
        m.upper_limit = i2f(p.maxpx()); // ��ͣ��
        m.lower_limit = i2f(p.minpx()); // ��ͣ��
        // ---------------------------------------
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade();
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        m.avg_bid_price = i2f(p.weightedavgbuypx());
        m.avg_ask_price = i2f(p.weightedavgsellpx());
        // m.open_interest = 0;
        // m.close = 0;
        // m.settle = 0;
        //m.new_knock_count = p->nNumTrades;
        //m.sum_knock_count += m.new_knock_count;
        for (int i = 0; i < 10 && i < p.buyorderqtyqueue_size() && i < p.buypricequeue_size(); ++i) {
            int64_t price = p.buypricequeue(i);
            int64_t volume = p.buyorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.bp.emplace_back(i2f(price));
                m.bv.emplace_back(volume);
            } else {
                break;
            }
        }
        for (int i = 0; i < 10 && i < p.sellorderqtyqueue_size() && i < p.sellpricequeue_size(); ++i) {
            int64_t price = p.sellpricequeue(i);
            int64_t volume = p.sellorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.ap.emplace_back(i2f(price));
                m.av.emplace_back(volume);
            } else {
                break;
            }
        }
        // -------------------------------------------------------------------------
        // �޸�����ͣ��״̬������������������Ϊͣ�ƣ�����ʱ��>=9:25:00���ɽ���=0����һ��=0����һ��=0����״̬��Ϊͣ�ơ�
        int8_t status = Status2Std(p.tradingphasecode());
        if (m.status == kStateOK && stamp >= kFixSecurityStatusBeginTime && m.sum_volume <= 0 && m.bv.empty() && m.av.empty()) {
            if (code.length() == 9) { // 000002.SZ, 600000.SH
                const char c1 = code.at(0);
                const char c2 = code.at(1);
                switch (c1) {
                case '6':
                    status = kStateSuspension;
                    break;
                case '0':
                case '3':
                    if (c2 == '0') { // 00, 30 ��ͷ
                        status = kStateSuspension;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }

    string Parse(const MDFund& p) {
        string code = p.htscsecurityid();
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeStock;
            m.src = kSrcQTickLevel2; // ����Դ
        }
        m.pre_close = i2f(p.preclosepx()); // ���ռ�
        m.upper_limit = i2f(p.maxpx()); // ��ͣ��
        m.lower_limit = i2f(p.minpx()); // ��ͣ��
        // ---------------------------------------
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade();
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        m.avg_bid_price = i2f(p.weightedavgbuypx());
        m.avg_ask_price = i2f(p.weightedavgsellpx());
        // m.open_interest = 0;
        // m.close = 0;
        // m.settle = 0;
        //m.new_knock_count = p->nNumTrades;
        //m.sum_knock_count += m.new_knock_count;
        for (int i = 0; i < 10 && i < p.buyorderqtyqueue_size() && i < p.buypricequeue_size(); ++i) {
            int64_t price = p.buypricequeue(i);
            int64_t volume = p.buyorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.bp.emplace_back(i2f(price));
                m.bv.emplace_back(volume);
            } else {
                break;
            }
        }
        for (int i = 0; i < 10 && i < p.sellorderqtyqueue_size() && i < p.sellpricequeue_size(); ++i) {
            int64_t price = p.sellpricequeue(i);
            int64_t volume = p.sellorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.ap.emplace_back(i2f(price));
                m.av.emplace_back(volume);
            } else {
                break;
            }
        }
        int8_t status = Status2Std(p.tradingphasecode());
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }

    string Parse(const MDBond& p) {
        string code = p.htscsecurityid();
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeStock;
            m.src = kSrcQTickLevel2; // ����Դ
        }
        m.pre_close = i2f(p.preclosepx()); // ���ռ�
        m.upper_limit = i2f(p.maxpx()); // ��ͣ��
        m.lower_limit = i2f(p.minpx()); // ��ͣ��
        // ---------------------------------------
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade();
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        m.avg_bid_price = i2f(p.weightedavgbuypx());
        m.avg_ask_price = i2f(p.weightedavgsellpx());
        // m.open_interest = 0;
        // m.close = 0;
        // m.settle = 0;
        //m.new_knock_count = p->nNumTrades;
        //m.sum_knock_count += m.new_knock_count;
        for (int i = 0; i < 10 && i < p.buyorderqtyqueue_size() && i < p.buypricequeue_size(); ++i) {
            int64_t price = p.buypricequeue(i);
            int64_t volume = p.buyorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.bp.emplace_back(i2f(price));
                m.bv.emplace_back(volume);
            } else {
                break;
            }
        }
        for (int i = 0; i < 10 && i < p.sellorderqtyqueue_size() && i < p.sellpricequeue_size(); ++i) {
            int64_t price = p.sellpricequeue(i);
            int64_t volume = p.sellorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.ap.emplace_back(i2f(price));
                m.av.emplace_back(volume);
            } else {
                break;
            }
        }
        int8_t status = Status2Std(p.tradingphasecode());
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }

    string Parse(const MDIndex& p) {
        string code = p.htscsecurityid();
        string std_code;
        int8_t market = 0;
        TransfromCode(code, std_code, market);
        if (std_code.empty()) {
            return "";
        }
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, std_code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeIndex;
            m.src = kSrcQTickLevel2; // ����Դ
        }
        m.pre_close = i2f(p.preclosepx()); // ���ռ�
        m.upper_limit = i2f(p.maxpx()); // ��ͣ��
        m.lower_limit = i2f(p.minpx()); // ��ͣ��
        // ---------------------------------------
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        if (stamp < 91459999) {
            LOG_INFO << "Index " << code << ", "<< stamp;
        }
        auto it = pre_tick_.find(code);
        if (it == pre_tick_.end()) {
            pre_tick_.emplace(code, TickInfo(stamp, p.lastpx(), p.totalvaluetrade()));
        } else {
            int64_t pre_timestamp = it->second.timestamp;
            int64_t pre_new_price = it->second.new_price;
            int64_t pre_sum_volume = it->second.sum_volume;
            it->second.timestamp = stamp;
            it->second.new_price = p.lastpx();
            it->second.sum_volume = p.totalvaluetrade();
            if (pre_timestamp == stamp) {
                 return "";
            }
            if (pre_new_price == p.lastpx() && pre_sum_volume == p.totalvaluetrade()) {
                return "";
            }
        }

        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
       // CSI��CNI��������λ�뻦������Ĳ�һ�£�������Ҫ����100��ɵ�λ�����ɡ�
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade() / 100; // ������Ҫ����100��ɵ�λ�����֡�
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        // m.open_interest = 0;
        // m.close = 0;
        // m.settle = 0;
        //m.new_knock_count = p->nNumTrades;
        //m.sum_knock_count += m.new_knock_count;
        int8_t status = Status2Std(p.tradingphasecode());
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }

    string Parse(const MDOrder& p) {
        // 11 12 13 14 15等是新债券
        if (p.ordertype() >= 11 && p.ordertype() <= 15) {
            return "";
        }
        string code = p.htscsecurityid();
        if (code.length() != 9) {
            return "";
        }
        int64_t order_no = 0;
        if (p.securityidsource() == XSHG) {
            order_no = p.orderno();
        } else {
            order_no = p.orderindex();
        }

        int8_t bs_flag = BsFlag2Std(p.orderbsflag());
        int8_t order_type = OrderType2Std(p.ordertype());

        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        int64_t timestamp = date * 1000000000LL + stamp % 1000000000LL;

        if (!order_) {
            co::fbs::QOrderT item;
            item.order_volume = p.orderqty();
            if (order_type == kQOrderTypeLimit) {
                item.order_price = p.orderprice();
            }
            item.order_no = order_no;
            item.timestamp = timestamp;
            item.recv_time = x::RawDateTime();
            item.code = code;
            item.order_type = order_type;
            item.bs_flag = bs_flag;
            if (item.order_volume == 0) {
                item.order_volume = int64_nan_;
            }
            if (item.order_price == 0) {
                item.order_price = int64_nan_;
            }
            if (item.order_no == 0) {
                item.order_no = int64_nan_;
            }
            if (item.timestamp == 0) {
                item.timestamp = int64_nan_;
            }
            if (item.order_type == 0) {
                item.order_type = int8_nan_;
            }
            if (item.bs_flag == 0) {
                item.bs_flag = int8_nan_;
            }
            push_fbb_.Reset();
            push_fbb_.Finish(co::fbs::QOrder::Pack(push_fbb_, &item));
            order_raw_ = string ((const char*)push_fbb_.GetBufferPointer(), push_fbb_.GetSize());
            order_ = flatbuffers::GetMutableRoot<co::fbs::QOrder>(order_raw_.data());
            if (order_->order_volume() == int64_nan_) {
                order_->mutate_order_volume(0);
            }
            if (order_->order_price() == int64_nan_) {
                order_->mutate_order_price(0);
            }
            if (order_->order_no() == int64_nan_) {
                order_->mutate_order_no(0);
            }
            if (order_->timestamp() == int64_nan_) {
                order_->mutate_timestamp(0);
            }
            if (order_->order_type() == int8_nan_) {
                order_->mutate_order_type(0);
            }
            if (order_->bs_flag() == int8_nan_) {
                order_->mutate_bs_flag(0);
            }
        } else {
            auto address = order_->mutable_code() ;
            // 长度必须要相等， 否则会越界
            memcpy(address->data(), code.data(), code.size());
            order_->mutate_order_volume(p.orderqty());
            if (order_type == kQOrderTypeLimit) {
                order_->mutate_order_price(p.orderprice());
            } else {
                order_->mutate_order_price(0);
            }
            order_->mutate_order_no(order_no);
            order_->mutate_timestamp(timestamp);
            order_->mutate_recv_time(x::RawDateTime());
            order_->mutate_order_type(order_type);
            order_->mutate_bs_flag(bs_flag);
        }
        return order_raw_;
    }

    string Parse(const MDTransaction& p) {
        string code = p.htscsecurityid();
        if (code.length() != 9) {
            return "";
        }
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        int64_t timestamp = date * 1000000000LL + stamp % 1000000000LL;

        int8_t bs_flag = BsFlag2Std(p.tradebsflag());
        if (bs_flag == 0) {
            if ((p.tradebuyno() > 0 && p.tradesellno() <= 0) || (p.tradebuyno() <= 0 && p.tradesellno() > 0)) {
                bs_flag = kBsFlagWithdraw;
            }
        }
        if (!knock_) {
            co::fbs::QKnockT item;
            item.code = code;
            item.match_amount = (double)p.trademoney();
            item.match_volume = p.tradeqty();
            item.match_price = p.tradeprice();
            item.ask_order_no = p.tradesellno();
            item.bid_order_no = p.tradebuyno();
            item.bs_flag = bs_flag;
            item.match_no = p.tradeindex();
            item.timestamp = timestamp;
            item.recv_time = x::RawDateTime();
            // 可能等于0的值 match_amount match_price ask_order_no bid_order_no bs_flag
            if (item.match_amount <= 0.000001) {
                item.match_amount = double_nan_;
            }
            if (item.match_volume == 0) {
                item.match_volume = int64_nan_;
            }
            if (item.match_price == 0) {
                item.match_price = int64_nan_;
            }
            if (item.ask_order_no == 0) {
                item.ask_order_no = int64_nan_;
            }
            if (item.bid_order_no == 0) {
                item.bid_order_no = int64_nan_;
            }
            if (item.bs_flag == 0) {
                item.bs_flag = int8_nan_;
            }
            if (item.match_no == 0) {
                item.match_no = int64_nan_;
            }
            push_fbb_.Reset();
            push_fbb_.Finish(co::fbs::QKnock::Pack(push_fbb_, &item));
            knock_raw_ = string ((const char*)push_fbb_.GetBufferPointer(), push_fbb_.GetSize());
            knock_ = flatbuffers::GetMutableRoot<co::fbs::QKnock>(knock_raw_.data());
            if (knock_->match_amount() == double_nan_) {
                knock_->mutate_match_amount(0);
            }
            if (knock_->match_volume() == int64_nan_) {
                knock_->mutate_match_volume(0);
            }
            if (knock_->match_price() == int64_nan_) {
                knock_->mutate_match_price(0);
            }
            if (knock_->ask_order_no() == int64_nan_) {
                knock_->mutate_ask_order_no(0);
            }
            if (knock_->bid_order_no() == int64_nan_) {
                knock_->mutate_bid_order_no(0);
            }
            if (knock_->bs_flag() == int8_nan_) {
                knock_->mutate_bs_flag(0);
            }
            if (knock_->match_no() == int64_nan_) {
                knock_->mutate_match_no(0);
            }
        } else {
            auto address = knock_->mutable_code() ;
            // 长度必须要相等， 否则会越界
            memcpy(address->data(), code.data(), code.size());
            knock_->mutate_match_amount((double)p.trademoney());
            knock_->mutate_match_volume(p.tradeqty());
            knock_->mutate_match_price(p.tradeprice());
            knock_->mutate_ask_order_no(p.tradesellno());
            knock_->mutate_bid_order_no(p.tradebuyno());
            knock_->mutate_bs_flag(bs_flag);
            knock_->mutate_match_no(p.tradeindex());
            knock_->mutate_timestamp(timestamp);
            knock_->mutate_recv_time(x::RawDateTime());
        }
        return knock_raw_;
    }

    string Parse(const MDOption& p) {
        string code = p.htscsecurityid();
        string std_code;
        int64_t market = Market2Std(p.securityidsource());
        if (market == 0) {
            return "";
        }
        if (market == kMarketSZ || market == kMarketSH) {
            std_code = p.htscsecurityid();
        } else {
            auto pos = code.find('.');
            if (pos == code.npos) {
                return "";
            }
            std_code = code.substr(0, pos) + string(Market2Suffix(market));
        }
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, std_code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeOption;
            m.src = kSrcQTickLevel2;
            m.market = market;
        }
        m.pre_close = i2f(p.preclosepx());
        m.pre_settle = i2f(p.presettleprice());
        m.upper_limit = i2f(p.maxpx());
        m.lower_limit = i2f(p.minpx());
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade();
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        m.settle = i2f(p.settleprice());
        m.avg_bid_price = i2f(p.weightedavgbuypx());
        m.avg_ask_price = i2f(p.weightedavgsellpx());
        m.open_interest = p.openinterest();
        for (int i = 0; i < 10 && i < p.buyorderqtyqueue_size() && i < p.buypricequeue_size(); ++i) {
            int64_t price = p.buypricequeue(i);
            int64_t volume = p.buyorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.bp.emplace_back(i2f(price));
                m.bv.emplace_back(volume);
            } else {
                break;
            }
        }
        for (int i = 0; i < 10 && i < p.sellorderqtyqueue_size() && i < p.sellpricequeue_size(); ++i) {
            int64_t price = p.sellpricequeue(i);
            int64_t volume = p.sellorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.ap.emplace_back(i2f(price));
                m.av.emplace_back(volume);
            } else {
                break;
            }
        }
        int8_t status = Status2Std(p.tradingphasecode());
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }

    string Parse(const MDFuture& p) {
        string code = p.htscsecurityid();
        string std_code;
        int64_t market = Market2Std(p.securityidsource());
        auto pos = code.find('.');
        if (pos == code.npos) {
            return "";
        }
        std_code = code.substr(0, pos) + string(Market2Suffix(market));
        QContextPtr ctx = QServer::Instance()->GetContext(code);
        if (!ctx) {
            ctx = QServer::Instance()->NewContext(code, std_code);
        }
        co::fbs::QTickT& m = ctx->PrepareQTick();
        if (m.dtype <= 0) {
            m.dtype = kDTypeFuture;
            if (market == kMarketCFFEX) {
                m.src = kSrcQTickLevel2;
            } else {
                m.src = kSrcQTickLevel1;
            }
            m.market = market;
        }
        m.pre_close = i2f(p.preclosepx());
        m.pre_settle = i2f(p.presettleprice());
        m.upper_limit = i2f(p.maxpx());
        m.lower_limit = i2f(p.minpx());
        int64_t date = p.exchangedate() > 0 ? p.exchangedate() : p.mddate();
        int64_t stamp = p.exchangetime() > 0 ? p.exchangetime() : p.mdtime();
        m.timestamp = date * 1000000000LL + stamp % 1000000000LL;
        int64_t pre_sum_volume = m.sum_volume;
        double pre_sum_amount = m.sum_amount;
        m.sum_volume = p.totalvolumetrade();
        m.sum_amount = (double)p.totalvaluetrade();
        m.new_price = i2f(p.lastpx());
        m.new_volume = m.sum_volume - pre_sum_volume;
        m.new_amount = m.sum_amount - pre_sum_amount;
        m.open = i2f(p.openpx());
        m.high = i2f(p.highpx());
        m.low = i2f(p.lowpx());
        m.close = i2f(p.closepx());
        m.settle = i2f(p.settleprice());
        m.open_interest = p.openinterest();
        for (int i = 0; i < 10 && i < p.buyorderqtyqueue_size() && i < p.buypricequeue_size(); ++i) {
            int64_t price = p.buypricequeue(i);
            int64_t volume = p.buyorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.bp.emplace_back(i2f(price));
                m.bv.emplace_back(volume);
            } else {
                break;
            }
        }
        for (int i = 0; i < 10 && i < p.sellorderqtyqueue_size() && i < p.sellpricequeue_size(); ++i) {
            int64_t price = p.sellpricequeue(i);
            int64_t volume = p.sellorderqtyqueue(i);
            if ((volume > 0 && price > 0) || (i == 1 && volume > 0 && price == 0)) {
                m.ap.emplace_back(i2f(price));
                m.av.emplace_back(volume);
            } else {
                break;
            }
        }
        int8_t status = Status2Std(p.tradingphasecode());
        m.status = status;
        string raw = ctx->FinishQTick();
        return raw;
    }
}