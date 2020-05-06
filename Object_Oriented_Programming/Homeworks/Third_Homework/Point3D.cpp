#include "Point3D.h"
#include <cmath>

Point3D::Point3D()
{
	setX(0);
	setY(0);
	setZ(0);
}

Point3D::Point3D(double x, double y,double z) : Point2D(x,y)
{
	setZ(z);
}

Point3D::Point3D(const Point3D & p)
{
	setX(p.getX());
	setY(p.getY());
	setZ(p.getZ());
}

void Point3D::setZ(double z)
{
	this->z = z;
}

double Point3D::getZ() const
{
	return this->z;
}

double Point3D::getDistanceTo(const Point3D & p)
{
	double distance;
	distance = sqrt(((p.getX() - getX())* (p.getX() - getX())) +
		((p.getY() - getY())* (p.getY() - getY())) +
		((p.getZ() - getZ())* (p.getZ() - getZ())));

	cout << "The distance between the two points is: " << endl
		<< distance << endl; 
	return distance;
}

void Point3D::print() const
{
	Point2D::print();
	cout << "Z: " << getZ();
}

ostream & operator<<(ostream &os, const Point3D &p)
{
	os << "Point X: " << p.getX() << endl
		<< "Point Y: " << p.getY() << endl
		<< "Point Z: " << p.getZ() << endl;

	return os;
}
Point3D* Point3D::clone() const
{
	return new Point3D(*this);
}

