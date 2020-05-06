#include "Mob.h"


Mob::Mob()
{
	increaseID();
	setHealth(0);
	setDamage(0);
	setName("");
	setLocation(nullptr);
}

Mob::Mob(int health, int damage, const char * name, Point2D * location) : Entity(name, location)
{
	increaseID();
	setHealth(health);
	setDamage(damage);
}

Mob::Mob(const Mob& m)
{
	increaseID();
	setHealth(m.getHealth());
	setDamage(m.getDamage());
	setName(m.getName());
	setLocation(m.getLocation());
}

Mob::~Mob()
{
}

Mob& Mob::operator=(const Mob & m)
{
	increaseID();
	setHealth(m.getHealth());
	setDamage(m.getDamage());
	setName(m.getName());
	setLocation(m.getLocation());

	return *this;
}

void Mob::setDamage(int damage)
{
	this->damage = damage;
}

int Mob::getDamage() const
{
	return this->damage;
}

void Mob::setHealth(int health)
{
	this->health = health;
}

int Mob::getHealth() const
{
	return this->health;
}

bool Mob::isAlive()
{
	if (this->health > 0)
		return true;
	else return false;
}

