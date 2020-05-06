#include "Entity.h"

int ID = 0;


Entity::Entity()
{
	increaseID();
	setName("");
	setLocation(nullptr);
}

Entity::Entity(const char* name, Point2D *p)
{
	increaseID();
	setName(name);
	setLocation(p);
}

Entity::Entity(const Entity & e)
{
	increaseID();
	setName(e.getName());
}

Entity::~Entity()
{
	delete[] this->name;
	delete[] this->location;
}

Entity & Entity::operator=(const Entity & e)
{
	increaseID();
	setName(e.getName());

	return *this;
}



int Entity::getID() const
{
	return this->id;
}

void Entity::increaseID()
{
	this->id = ID;
	ID++;
}

void Entity::setLocation(Point2D* p)
{
	this->location = p;
}

Point2D* Entity::getLocation() const
{
	return this->location;
}

void Entity::setName(const char* name)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

const char* Entity::getName() const
{
	return this->name;
}

bool Entity::isAlive()
{
	return true;
}

double Entity::getDistanceTo2D(const Entity& e)
{
	double distance = getLocation()->getDistanceTo(*e.getLocation());
	return distance;

}

double Entity::getDistanceTo(const Entity & e)
{
	if (nullptr != dynamic_cast<Point3D*>(this->location) &&
		nullptr != dynamic_cast<Point3D*>(e.getLocation()))
	{
		Point3D* point1 = dynamic_cast<Point3D*>(this->location);
		Point3D* point2 = dynamic_cast<Point3D*>(e.getLocation());
		return point1->getDistanceTo(*point2);
	}
	else return this->getDistanceTo2D(e);

}

void Entity::moveTo(Point2D* p)
{
	if ((nullptr != dynamic_cast<Point3D*>(this->location) &&
		nullptr != dynamic_cast<Point3D*>(p)) ||
		(nullptr != dynamic_cast<Point2D*>(this->location) &&
			nullptr != dynamic_cast<Point2D*>(p)))
	{
		this->location = p;
	}


	else if ((nullptr != dynamic_cast<Point3D*>(this->location) &&
		nullptr != dynamic_cast<Point2D*>(p)) || 
		(nullptr != dynamic_cast<Point2D*>(this->location) &&
			nullptr != dynamic_cast<Point3D*>(p)))

	{
		this->location->setX(p->getX());
		this->location->setY(p->getY());
	}
}

void Entity::moveTo(const Entity & e)
{
	*getLocation() = *e.getLocation();
}

void Entity::print()const
{
	cout << "Entity ID:" << getID() << endl
		<< "Entity Name:" << getName() << endl;
	if (nullptr != dynamic_cast<Point3D*>(this->location))
	{
		this->location->print();
	}
	else
		this->location->print();
	
}
