#include "Environment.h"

Environment::Environment() = default;

void Environment::destroyEntities()
{
	for (Entity* entity : entities)
	{
		delete entity;
	}

	entities.clear();
}

bool Environment::is_closer(Entity& source, const Entity* one, const Entity*& two)
{
	double firstDistance = source.getDistanceTo(*one);
	double secondDistance = source.getDistanceTo(*two);

	return firstDistance < secondDistance;
}

Environment& Environment::get_instance()
{
	static Environment ins;
	return ins;
}

Environment::~Environment()
{
	this->destroyEntities();
}

void Environment::add(const Entity& e)
{

}

const Entity& Environment::getAt(int index)
{
	return *entities.at(index);
}

void Environment::removeAt(int index)
{
	this->entities.erase(entities.begin() + index);
}

void Environment::generateEntities()
{
	Point2D p(5, 6);
	Point3D a(2, 4, 9);
	Point3D b(10, 2, 8);
	Point3D c(10, 5, 2);
	Point3D d(2, 6, 1);
	Player* player = new Player(10, 100, "player", &p);

	Mob* mob1 = new Mob(25, 20, "mob1", &a);
	Mob* mob2 = new Mob(70, 50, "mob2", &b);
	Mob* mob3 = new Mob(10, 60, "mob3", &c);

	NPC* npc = new NPC("npc", &d);

	this->entities.push_back(player);
	this->entities.push_back(mob1);
	this->entities.push_back(mob2);
	this->entities.push_back(mob3);
	this->entities.push_back(npc);
}


const Entity* Environment::getClosestAliveEntity(Player& p, Type t)
{
	if (this->entities.empty())
	{
		return nullptr;
	}

	Entity* closest = this->entities[0];
	double mindistance = p.getDistanceTo(*closest);

	for (Entity* curr : this->entities)
	{

		double distance = p.getDistanceTo(*curr);
		if (distance < distance)
		{
			closest = curr;
			mindistance = distance;
		}
	}

	return closest;
}


