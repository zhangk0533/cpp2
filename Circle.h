#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle:public Shape
{
public:
	Circle(double radius);
	virtual ~Circle();
	virtual double calcArea();
private:
	double m_dR;
};

#endif