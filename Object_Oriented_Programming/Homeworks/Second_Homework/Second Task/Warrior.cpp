#include "Warrior.h"

Warrior::Warrior(const char* name, unsigned int HP, unsigned int MP,
	unsigned int AP, unsigned int DP) : GameCharacter(name, HP, MP, AP, DP)
{
	name = "Warrior";
	HP = 20;
	MP = 5;
	AP = 4;
	DP = 1;
}

Warrior::Warrior()
{
	setName("Warrior");
	setHP(20);
	setMP(5);
	setAP(4);
	setDP(1);
}

Warrior::~Warrior()
{
}