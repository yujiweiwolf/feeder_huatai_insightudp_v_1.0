#pragma once

#include <iostream>
#include <sstream>
#include <string>

#include "feeder/qoptions.h"

using namespace std;

namespace co {
    
    class Config {
    public:
        static Config* Instance();

        inline string server_host() {
            return server_host_;
        }
        inline int server_port() {
            return server_port_;
        }
        inline string server_host_1() {
            return server_host_1_;
        }
        inline int server_port_1() {
            return server_port_1_;
        }
        inline string username() {
            return username_;
        }
        inline string password() {
            return password_;
        }
        inline int apilog_flag() {
            return apilog_flag_;
        }
        inline int compress_flag() {
            return compress_flag_;
        }
        inline string interface_ip() {
            return interface_ip_;
        }
        inline string static_dir() {
            return static_dir_;
        }
        inline int market() {
            return market_;
        }
        inline QOptionsPtr opt() {
			return opt_;
		}

    protected:
		Config() = default;
		~Config() = default;
		Config(const Config&) = delete;
		const Config& operator=(const Config&) = delete;

        void Init();

    private:
        static Config* instance_;

		QOptionsPtr opt_;

        string server_host_;
        int server_port_ = 0;
        string server_host_1_;
        int server_port_1_ = 0;
        string username_;
        string password_;
        int apilog_flag_ = 0;
        int compress_flag_ = 0;
        string interface_ip_;
        int market_ = 0;
        string static_dir_;
    };
}