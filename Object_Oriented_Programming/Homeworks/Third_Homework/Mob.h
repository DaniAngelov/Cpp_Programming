#pragma once
#include "Entity.h"
#include "Entity.h"

class Mob : public Entity
{
private:
	Type mob;

	int damage;
	int health;

public:
	Mob();
	Mob(int health, int damage, const char* name, Point2D* location);
	Mob(const Mob& m);
	~Mob();
	Mob& operator=(const Mob& m);

	void setDamage(int damage);
	int getDamage()const;
	void setHealth(int health);
	int getHealth()const;

	bool isAlive()override;
	
};