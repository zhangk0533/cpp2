#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

enum MathExexption
{
	ZeroException = 10,
	NagetiveException = 20,
	NoSolutionException = 30
};

void fun1(int flag)
{
	switch (flag)
	{
	case 0:
		throw ZeroException;
		break;
	case 1:
		throw NagetiveException;
		break;
	case 2:
		throw NoSolutionException;
		break;
	}
}

//void fun2()
//{
//	try
//	{
//		fun1();
//	}
//	catch(int)
//	{
//		cout << "exception" << endl;
//	}
//}

int main(void)
{
	try
	{
		fun1(0);
	}
	catch(MathExexption e)
	{
		cout << "exception: " << e << endl;
	}

	system("pause");
	return 0;
}