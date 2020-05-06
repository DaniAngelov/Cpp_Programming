#pragma once
#include <iostream>
using namespace std;

class Point2D
{
private:
	double x;
	double y;

public:
	Point2D();
	Point2D(double x, double y);
	Point2D(const Point2D& p);

	void setX(double x);
	double getX()const;
	void setY(double y);
	double getY()const;

	virtual void print()const;
	double getDistanceTo(const Point2D& p);
	friend ostream & operator<<(ostream &os, const Point2D&p);
	Point2D* clone() const;
};