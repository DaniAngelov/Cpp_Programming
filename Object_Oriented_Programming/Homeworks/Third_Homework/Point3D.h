#pragma once
#include "Point2D.h"
#include <iostream>
using namespace std;

class Point3D: public Point2D
{
private:
	double z;

public:

	Point3D();
	Point3D(double x, double y,double z);
	Point3D(const Point3D& p);

	void setZ(double z);
	double getZ()const;

	double getDistanceTo(const Point3D& p);
	void print()const override;
	friend ostream & operator<<(ostream &os, const Point3D &p);
	Point3D* clone() const;
};