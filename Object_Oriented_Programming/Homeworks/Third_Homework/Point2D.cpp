#include "Point2D.h"
#include <cmath>

Point2D::Point2D()
{
	setX(0);
	setY(0);
}

Point2D::Point2D(double x, double y)
{
	setX(x);
	setY(y);
}

Point2D::Point2D(const Point2D & p)
{
	setX(p.getX());
	setY(p.getY());
}

void Point2D::setX(double x)
{
	this->x = x;
}

double Point2D::getX()const
{
	return this->x;
}

void Point2D::setY(double y)
{
	this->y = y;
}

double Point2D::getY() const
{
	return this->y;
}

void Point2D::print() const
{
	cout << "X: " << getX() << endl
		<< "Y: " << getY() << endl;
}

double Point2D::getDistanceTo(const Point2D & p)
{
	double distance1;
	double distance2;
	distance1 = sqrt((p.getX()*p.getX()) + (p.getY()* p.getY()));
	distance2 = sqrt((getX()*getX()) + (getY()* getY()));

	cout << "Distance from this object to the entered object: " << endl;

	if (distance1 > distance2)
	{
		cout << distance1 - distance2;
		int distance3 = distance1 - distance2;
		return  distance3;
	}
	else
	{
		cout << distance2 - distance1;
		int distance3 = distance2 - distance1;
		return distance3;
	}

}

ostream & operator<<(ostream &os, const Point2D&p)
{
	os << "Point X: " << p.getX() << endl
		<< "Point Y: " << p.getY() << endl;

	return os;
}
Point2D* Point2D::clone() const
{
	return new Point2D(*this);
}