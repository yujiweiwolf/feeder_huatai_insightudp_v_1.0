#include <mutex>
#include <thread>
#include <filesystem>
#include <boost/filesystem.hpp>
#include "x/x.h"
#include "coral/coral.h"
#include "yaml-cpp/yaml.h"
#include "config.h"

namespace co {
    Config* Config::instance_ = nullptr;

    Config* Config::Instance() {
        static std::once_flag flag;
        std::call_once(flag, [&]() {
            if (instance_ == 0) {
                instance_ = new Config();
                instance_->Init();
            }
        });
        return instance_;
    }

    void Config::Init() {
        try {
            auto getStr = [&](const YAML::Node& node, const std::string& name) {
                try {
                    return node[name] && !node[name].IsNull() ? node[name].as<std::string>() : "";
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };
            auto getInt = [&](const YAML::Node& node, const std::string& name, const int64_t& default_value = 0) {
                try {
                    return node[name] && !node[name].IsNull() ? node[name].as<int64_t>() : default_value;
                } catch (std::exception& e) {
                    LOG_ERROR << "load configuration failed: name = " << name << ", error = " << e.what();
                    throw std::runtime_error(e.what());
                }
            };

            auto filename = x::FindFile("feeder.yaml");
            YAML::Node root = YAML::LoadFile(filename);
            opt_ = QOptions::Load(filename);
            auto insight_feeder = root["insight"];

            server_host_ = getStr(insight_feeder,"server_host");
            server_port_ = getInt(insight_feeder, "server_port");
            server_host_1_ = getStr(insight_feeder,"server_host_1");
            server_port_1_ = getInt(insight_feeder, "server_port_1");
            username_ = getStr(insight_feeder,"username");
            password_ = getStr(insight_feeder,"password");
            password_ = DecodePassword(password_);

            apilog_flag_ = getInt(insight_feeder, "apilog_flag");
            compress_flag_ = getInt(insight_feeder, "compress_flag");
            interface_ip_ = getStr(insight_feeder,"interface_ip");
            market_ = getInt(insight_feeder, "market");
            static_dir_ = getStr(insight_feeder,"static_dir");
            stringstream ss;
            ss << "+-------------------- configuration begin --------------------+" << endl;
            ss << opt_->ToString() << endl;
            ss << endl;
            ss << "insight:" << endl
               << "  server_host: " << server_host_ << endl
               << "  server_port: " << server_port_ << endl
               << "  server_host_1: " << server_host_1_ << endl
               << "  server_port_1: " << server_port_1_ << endl
               << "  username: " << username_ << endl
               << "  password: " << string(password_.size(), '*') << endl
               << "  interface_ip: " << interface_ip_ << endl
               << "  apilog_flag: " << apilog_flag_ << endl
               << "  compress_flag: " << compress_flag_ << endl
               << "  market: " << market_ << endl
               << "  static_dir: " << static_dir_ << endl
               << "+-------------------- configuration end   --------------------+";
            LOG_INFO << endl << ss.str();
        } catch (std::exception& e) {
            LOG_ERROR << "load configuration failed: " << e.what();
            throw std::runtime_error(e.what());
        }
    }
}
