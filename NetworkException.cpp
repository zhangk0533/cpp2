#include "NetworkException.h"

NetworkMyException::NetworkMyException(int code,string msg):MyException(code,msg)
{
	cout << "NetworkMyException" << endl;
}

int NetworkMyException::getErrorInfo(string &msg)
{
	cout << "NetworkMyException::getErrorInfo" << endl;
	msg = m_strMsg;
	return m_iCode;
}