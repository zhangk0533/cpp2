#include <string>
#include <iostream>
using namespace std;


class MyException
{
public:
	MyException(int code,string msg);
	virtual int getErrorInfo(string &msg);
protected:
	int m_iCode;
	string m_strMsg;
};