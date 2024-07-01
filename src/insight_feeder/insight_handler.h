#pragma once

#include <sstream>
#include <string>
#include <mutex>
#include <thread>
#include <boost/lockfree/queue.hpp>
#include <x/x.h>
#include "feeder/feeder.h"

#include "define.h"
#include "insight_support.h"


namespace co {

    class InsightHandler : public MessageHandle {
    public:
        InsightHandler();
        ~InsightHandler();
        void ClearQueryStatus();
        string WaitQueryStatus();

    public:
        /**
        * 发送订阅请求后服务端回复消息，查看是否订阅成功
        * @param[in] data_stream
        */
        void OnServiceMessage(const ::com::htsc::mdc::insight::model::MarketDataStream& data_stream);

        /**
        * 处理订阅后推送的实时行情数据
        * @param[in] data
        */
        void OnMarketData(const com::htsc::mdc::insight::model::MarketData& data);
        /**
        * 处理回测请求成功后推送的回测数据
        * @param[in] PlaybackPayload 回测数据
        */
        void OnPlaybackPayload(const PlaybackPayload& payload);

        /**
        * 处理回测状态
        * @param[in] PlaybackStatus 回测状态
        */
        void OnPlaybackStatus(const com::htsc::mdc::insight::model::PlaybackStatus& status);

        /**
        * 处理查询请求返回结果
        * @param[in] MDQueryResponse 查询请求返回结果
        */
        void OnQueryResponse(const ::com::htsc::mdc::insight::model::MDQueryResponse& response);


        void OnLoginSuccess();

        void OnLoginFailed(int error_no, const std::string& message);

        void OnNoConnections();

        void OnReconnect();

        void Start();

        void Run();

    private:
        std::mutex mutex_;

        bool query_over_ = false;
        string query_error_;
        std::shared_ptr<std::thread> thread_;
        boost::lockfree::queue<com::htsc::mdc::insight::model::MarketData*, boost::lockfree::fixed_sized<false>> queue_;
    };
}