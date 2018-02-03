#include "Rectanle.h"

Rectanle::Rectanle(double height,double width)
{
	m_dHeight = height;
	m_dWidth = width;
	cout << "Rectanle" << endl;
}

Rectanle::~Rectanle()
{
	cout << "~Rectanle" << endl;
}

double Rectanle::calcArea()
{
	cout << "Rectanle::calcArea()" << endl;
	return m_dHeight*m_dWidth;
}
