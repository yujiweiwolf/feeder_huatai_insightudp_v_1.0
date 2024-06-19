// Copyright 2021 Fancapital Inc.  All rights reserved.
#pragma once

#ifdef _MSC_VER
    void BindCPU() {
    }
#else
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sys/time.h>
#include <cstdlib>
#include <vector>
#include <sys/select.h>
#include <errno.h>
#include "iconv.h"
#include <string>
#include <sys/select.h>
#include <signal.h>
#include <errno.h>
#include <dirent.h>
#include <map>
#include <fstream>
#include <sstream>
#include <unistd.h>

struct CPUStat {
    int64_t user;
    int64_t nice;
    int64_t system;
    int64_t idle;
    int64_t iowait;
    int64_t irq;
    int64_t softirq;
};

    bool GetAllCpuState(map<string, CPUStat>& cpuid_stat_map) {
        ifstream ifile("/proc/stat", ios::in);
        if (!ifile.is_open()) {
            ifile.close();
            return false;
        }
        string line_str;
        while (getline(ifile, line_str)) {
            if (line_str.find("cpu ") == line_str.npos && line_str.find("cpu") != line_str.npos) {
                stringstream ss(line_str);
                string str;
                vector<string> r;
                while (getline(ss, str, ' ')) {
                    r.push_back(str);
                }
                CPUStat stat;
                memset(&stat, 0, sizeof(stat));
                int index = 1;
                stat.user = stol(r[index++]);
                stat.nice = stol(r[index++]);
                stat.system = stol(r[index++]);
                stat.idle = stol(r[index++]);
                stat.iowait = stol(r[index++]);
                stat.irq = stol(r[index++]);
                stat.softirq = stol(r[index++]);
                cpuid_stat_map[r[0]] = stat;
            }
        }
        ifile.close();
        return true;
    }

    int GetIdleCPUID() {
        map<string, CPUStat> first_cpuid_stat_map;
        map<string, CPUStat> second_cpuid_stat_map;
        if (!GetAllCpuState(first_cpuid_stat_map)) {
            return 0;
        }
        sleep(1);
        if (!GetAllCpuState(second_cpuid_stat_map)) {
            return 0;
        }

        map<int64_t, int64_t> usage_cpuid_map;
        int64_t cpu_total1 = 0;
        int64_t cpu_use1 = 0;
        int64_t cpu_total2 = 0;
        int64_t cpu_use2 = 0;
        int64_t usage = 0;
        for (auto it : first_cpuid_stat_map) {
            cpu_total1 = it.second.user + it.second.nice + it.second.system + it.second.idle + it.second.iowait +
                it.second.irq + it.second.softirq;
            cpu_use1 = it.second.user + it.second.nice + it.second.system + it.second.irq + it.second.softirq;
            CPUStat& stat = second_cpuid_stat_map[it.first];
            cpu_total2 = stat.user + stat.nice + stat.system + stat.idle + stat.iowait + stat.irq + stat.softirq;
            cpu_use2 = stat.user + stat.nice + stat.system + stat.irq + stat.softirq;
            usage = (cpu_use2 - cpu_use1) * 100 / (cpu_total2 - cpu_total1);

            usage_cpuid_map[(int64_t)usage] = stoi(it.first.substr(3));
            printf("<%s> Usage<%ld>\n", it.first.c_str(), usage);
        }
        return usage_cpuid_map.begin()->second;
    }

    void BindCPU() {
        int cpu_id = GetIdleCPUID();
        printf("==========BindCPU <%d>============\n", cpu_id);
        cpu_set_t mask;
        CPU_ZERO(&mask);
        CPU_SET(cpu_id, &mask);
        if (sched_setaffinity(0, sizeof(mask), &mask) == -1) {
            printf("Set Affinity Fail");
        }
        return;
    }
#endif