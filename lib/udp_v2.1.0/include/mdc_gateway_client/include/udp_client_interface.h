#pragma once
#include <string>
#include "base_define.h"
#include "MDSubscribe.pb.h"

NAMESPACE_BEGIN
class MessageHandle;
NAMESPACE_END

using namespace com::htsc::mdc::gateway;

namespace com {
namespace htsc {
namespace mdc {
namespace udp {
class UdpClientInterface
{
public:
	UdpClientInterface() {}
	virtual ~UdpClientInterface() {}

public:
	/**
	* ע�ᴦ����󣬱�����login֮ǰ����
	* @param[in] handle �������
	*/
	virtual void RegistHandle(MessageHandle* handle) = 0;

	/**
	* ʹ���˻������¼���÷���������ȡ�鲥��ַ
	* @param[in]  ip        ���÷�������ַ
	* @param[in]  port      ���÷������˿�
	* @param[in]  user_name �û���
	* @param[in]  password  ����
	* @param[in]  backups   ���÷�������ַ�Ͷ˿�
	* @param[out] int       ��¼���
	*/
	virtual int LoginById(const std::string& ip, int port, const std::string& user_name, const std::string& password, const std::map<std::string, int>& backups) = 0;
	
	/**
	* ʹ��ָ��������ַ����������ȡ�鲥����
	* @param[in]  interface_ip   ���ڶ����鲥������ip
	* @param[out] int            ���Ľ��
	*/
	virtual int SubscribeAll(const std::string& interface_ip) = 0;

	/**
	* ʹ��ָ��������ַ������ָ����������
	* @param[in]  interface_ip   ���ڶ����鲥������ip
	* @param[in]  source_type    ������������
	* @param[out] int            ���Ľ��
	*/
	virtual int SubscribeBySourceType(const std::string& interface_ip, 
		::com::htsc::mdc::insight::model::SubscribeBySourceType* source_type) = 0;

	/**
	* ���ô����̳߳��߳���
	* @param[in] count �߳���
	*/
	virtual void SetWorkPoolThreadCount(short count) = 0;
};

}
}
}
}