注意事项 
* cmake 编绎的文件启动会崩溃， 用makefile
* api是由ubuntu18.04的版本编绎的
INSIGHT-UDP API对系统环境有较高要求。用户需要配置系统的网络发送和接收缓冲不小于10MB，示例配置命令如下：
sudo sysctl net.core.rmem_max=10485760
sudo sysctl net.core.wmem_max=10485760

* 订阅行情时必须要交易所的选项SecurityIdSource， tcp版本可以不填
* 此程序不可能docker运行，只能在root帐号下启动

# v1.0.10 (2024-07-01)
* 升级libfeeder支持逐笔数据的Pub功能

# v1.0.9 (2023-08-07)
* 升级libfeeder支持逐笔数据的Pub功能

# v1.0.8 (2023-04-21)
* 使用最新的libfeeder库, 修正合约的交易状态

# v1.0.7 (2023-02-08)
* 华泰的api在ubuntu20.04, gcc8.3.0的环境, 采用protobuf-3.21.4编绎成的

# v1.0.6 (2022-10-20)
* 增加期权与期货的静态数据

# v1.0.5 (2022-09-26)
* 增加CNI CSI指数订阅
* 增加期权与期货的数据解析

# v1.0.4 (2022-09-14)
* 可能有重复的Tick数据, open_double_select去重

# v1.0.3 (2022-09-13)
* 重构报单与成交的解析方式, 在string上直接修改

# v1.0.2 (2022-09-08)
* OnMarketData是多线程函数，改用无锁队列处理

# v1.0.1 (2022-09-02)
* 初始版本
