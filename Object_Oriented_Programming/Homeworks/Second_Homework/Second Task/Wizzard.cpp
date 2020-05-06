#include "Wizzard.h"

Wizzard::Wizzard(const char* name, unsigned int HP, unsigned int MP,
	unsigned int AP, unsigned int DP) : GameCharacter(name, HP, MP, AP, DP)
{
	name = "Wizard";
	HP = 30;
	MP = 30;
	AP = 2;
	DP = 2;
}

Wizzard::Wizzard()
{
	setName("Wizzard");
	setHP(30);
	setMP(30);
	setAP(2);
	setDP(2);
}

Wizzard::~Wizzard()
{
}