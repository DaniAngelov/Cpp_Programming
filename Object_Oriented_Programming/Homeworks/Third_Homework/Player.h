#pragma once
#include "Entity.h"
#include "Mob.h"

class Player: public Entity
{
private:

	Type player;
	int damage;
	int health;

public:
	

	Player();
	Player(int health, int damage, const char* name, Point2D* location);
	Player(const Player& p);
	~Player();
	Player& operator=(const Player& p);

	void setDamage(int damage);
	int getDamage()const;
	void setHealth(int health);
	int getHealth()const;
	
	bool isAlive()override;
	void attackPlayer(const Player& p);
	
	void attackMob(const Mob& m);

};