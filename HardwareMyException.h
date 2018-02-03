#include "MyException.h"

class HardwareMyException:public MyException
{
public:
	HardwareMyException(int code,string msg);
	virtual int getErrorInfo(string &msg);
private:

};