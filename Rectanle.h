#ifndef RECTANLE_H
#define RECTANLE_H

#include "Shape.h"

class Rectanle:public Shape
{
public:
	Rectanle(double height,double width);
	virtual ~Rectanle();
	virtual double calcArea();

private:
	double m_dHeight;
	double m_dWidth;
};

#endif