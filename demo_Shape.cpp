#include "Circle.h"
#include "Rectanle.h"
#include <stdlib.h>


int main_Shape(void)
{
	Shape *p1 = new Rectanle(2.0,1.0);
	Shape *p2 = new Circle(2.0);

	/*pRectanle->calcArea();
	pCircle->calcArea();
	p3->calcArea();*/
	p1->calcArea();
	p2->calcArea();

	delete p1;
	p1 = nullptr;
	delete p2;
	p2 = nullptr;

	/*Shape *p = new Shape();

	cout << sizeof(*p) << endl;*/


	system("pause");
	return 0;
}