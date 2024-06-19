#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <memory>
#include <thread>
#include <x/x.h>

#include "config.h"
#include "insight_support.h"
#include "insight_handler.h"

using namespace com::htsc::mdc::gateway;
using namespace com::htsc::mdc::model;
using namespace com::htsc::mdc::insight::model;

namespace co {

    class InsightServer {
    public:
        
        void Run();
        void Stop();        

    protected:
        void Login();
        void QueryContracts();
        void SubQuotation();
        void SetSubFuture(SubscribeBySourceType& sub);
        void SetSubInfo(SubscribeBySourceType& sub, const EMarketDataType& dtype, const ESecurityType& stype);

    private:
        UdpClientInterface* client_ = nullptr;
        InsightHandler* handler_ = nullptr;
    };
}
