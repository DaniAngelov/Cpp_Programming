#pragma once
#include "Point2D.h"
#include "Point3D.h"
#include <iostream>
#include <string>

using namespace std;

extern int ID;

	enum Type
	{
		player,mob,npc
	};


class Entity
{
private:
	int id;
	char* name = nullptr;
	Point2D* location ;

public:

	Entity();
	Entity(const char* name, Point2D* p);
	Entity(const Entity& e);
	~Entity();

	Entity& operator=(const Entity& e);

	int getID()const;
	void increaseID();

	void setLocation(Point2D* p);
	 Point2D* getLocation()const;

	void setName(const char* name);
	const char* getName()const;

	virtual bool isAlive() = 0;
	double getDistanceTo2D(const Entity& e);
	double getDistanceTo(const Entity& e);

	void moveTo (Point2D* p);
	void moveTo(const Entity& e);

	void print()const;

	
};

