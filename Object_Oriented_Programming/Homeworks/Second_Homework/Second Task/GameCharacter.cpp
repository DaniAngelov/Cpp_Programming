#include "GameCharacter.h"
#include "Guardian.h"

GameCharacter::GameCharacter()
{
	setName("none");
	setHP(0);
	setMP(0);
	setAP(0);
	setDP(0);
}

GameCharacter::GameCharacter(const char* name,unsigned int HP, unsigned int MP,
	unsigned int AP, unsigned int DP)
{
	setName(name);
	setHP(HP);
	setMP(MP);
	setAP(AP);
	setDP(DP);
}


GameCharacter::GameCharacter(const GameCharacter & ch)
{
	setName(ch.getName());
	setHP(ch.getHP());
	setMP(ch.getMP());
	setAP(ch.getAP());
	setDP(ch.getDP());
}

GameCharacter::~GameCharacter()
{
	delete[] this->name;
}

void GameCharacter::setName(const char * name)
{
	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

const char * GameCharacter::getName() const
{
	return this->name;
}

void GameCharacter::setHP(unsigned int HP)
{
	this->HP = HP;
}

unsigned int GameCharacter::getHP() const
{
	return this->HP;
}

void GameCharacter::setMP(unsigned int MP)
{
	this->MP = MP;
}

unsigned int GameCharacter::getMP() const
{
	return this->MP;
}

void GameCharacter::setAP(unsigned int AP)
{
	this->AP = AP;
}

unsigned int GameCharacter::getAP() const
{
	return this->AP;
}

void GameCharacter::setDP(unsigned int DP)
{
	this->DP = DP;
}

unsigned int GameCharacter::getDP() const
{
	return this->DP;
}

void GameCharacter::getattacked(int enemyattack)
{
	enemyattack = enemyattack - getDP();
	if (enemyattack < 0)
		cout << "Nothing changed in your hp bar" << endl;

	else
		if (enemyattack > getHP())
		{
			cout << "Your hero is dead !" << endl;
		}
		else
		{
			this->HP = getHP() - enemyattack;
			cout << "HP left: " << this->HP << endl;
		}
}

void GameCharacter::print() const
{
	cout << "Character name :" << getName() << endl
		<< "Character HP :" << getHP() << endl
		<< "Character MP :" << getMP() << endl
		<< "Character AP:" << getAP() << endl
		<< "Character DP :" << getDP() << endl
		<< "-----------------------------" << endl;
}

