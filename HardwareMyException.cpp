#include "HardwareMyException.h"

HardwareMyException::HardwareMyException(int code,string msg):MyException(code,msg)
{
	cout << "HardwareMyException" << endl;
}

int HardwareMyException::getErrorInfo(string &msg)
{
	cout << "HardwareMyException::getErrorInfo" << endl;
	msg = m_strMsg;
	return m_iCode;
}