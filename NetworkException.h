#ifndef NETWORKEXCEPTION_H
#define NETWORKEXCEPTION_H


#include "MyException.h"

class NetworkMyException:public MyException
{
public:
	NetworkMyException(int code,string msg);
	virtual int getErrorInfo(string &msg);
};

#endif