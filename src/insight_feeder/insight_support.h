#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <memory>

#include "base_define.h"
#include "mdc_client_factory.h"
#include "client_interface.h"
#include "message_handle.h"
// #include "BaseFunction.h"
#include "parameter_define.h"
#include "udp_client_interface.h"
#include "feeder/feeder.h"
using namespace com::htsc::mdc::udp;

using namespace com::htsc::mdc::gateway;
using namespace com::htsc::mdc::model;
using namespace com::htsc::mdc::insight::model;


#ifdef _WIN32
#pragma comment(lib, "libprotobuf.lib")
#pragma comment(lib, "mdc_gateway_client.lib")
#endif

using namespace std;

namespace co {

    int8_t BsFlag2Std(const int32_t& _bs_flag);
    int8_t OrderType2Std(const int32_t& _order_type);
    int8_t Status2Std(const string& _status);
    void TransfromCode(const string& code, string& std_code, int8_t& market);
    int64_t Market2Std(::com::htsc::mdc::model::ESecurityIDSource source);

    string Parse(const MDStock& p);
    string Parse(const MDFund& p);
    string Parse(const MDBond& p);
    string Parse(const MDIndex& p);

    string Parse(const MDOrder& p);
    string Parse(const MDTransaction& p);

    string Parse(const MDOption& p);
    string Parse(const MDFuture& p);
    struct TickInfo {
        int64_t timestamp;
        int64_t new_price;
        int64_t sum_volume;
        TickInfo(int64_t _timestamp, int64_t _new_price, int64_t _sum_volume) : timestamp(_timestamp), new_price(_new_price),
            sum_volume(_sum_volume) {
        }
    };
    static std::map<std::string, TickInfo> pre_tick_;
    static int64_t int64_nan_ = std::numeric_limits<int64_t>::min();
    static int8_t int8_nan_ = std::numeric_limits<int8_t>::min();
    static double double_nan_ = std::numeric_limits<double>::min();
    static string order_raw_;
    static co::fbs::QOrder* order_ = nullptr;
    static string knock_raw_;
    static co::fbs::QKnock* knock_ = nullptr;
    static flatbuffers::FlatBufferBuilder push_fbb_;
}