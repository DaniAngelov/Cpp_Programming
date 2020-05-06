#include "Player.h"
#include "Mob.h"

Player::Player()
{
	increaseID();
	setHealth(0);
	setDamage(0);
	setName("");
	setLocation(nullptr);
}

Player::Player(int health, int damage, const char * name, Point2D * location) : Entity(name,location)
{
	increaseID();
	setHealth(health);
	setDamage(damage);
}

Player::Player(const Player & p)
{
	increaseID();
	setHealth(p.getHealth());
	setDamage(p.getDamage());
	setName(p.getName());
	setLocation(p.getLocation());
}

Player::~Player()
{
}

Player & Player::operator=(const Player & p)
{
	increaseID();
	setHealth(p.getHealth());
	setDamage(p.getDamage());
	setName(p.getName());
	setLocation(p.getLocation());

	return *this;
}

void Player::setDamage(int damage)
{
	this->damage = damage;
}

int Player::getDamage() const
{
	return this->damage;
}

void Player::setHealth(int health)
{
	this->health = health;
}

int Player::getHealth() const
{
	return this->health;
}

bool Player::isAlive()
{
	if (this->health > 0)
		return true;
	else return false;
}

void Player::attackPlayer(const Player& p)
{
	double distance = getLocation()->getDistanceTo(*p.getLocation());
	if (distance < 5)
	{
		setHealth(p.getHealth() - getDamage());
		cout << this->health;
	}

}

void Player::attackMob(const Mob& m)
{
	
	double distance = getLocation()->getDistanceTo(*m.getLocation());
	cout << distance;
	if (distance < 5)
	{
		setHealth(m.getHealth() - getDamage());
		cout << this->health;
	}
}

