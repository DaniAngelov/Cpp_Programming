#include "Guardian.h"

Guardian::Guardian(const char* name, unsigned int HP, unsigned int MP,
	unsigned int AP, unsigned int DP): GameCharacter(name, HP, MP, AP, DP)
{
	name = "Guardian";
	HP = 40;
	MP = 25;
	AP = 1;
	DP = 3;
}

Guardian::Guardian()
{
	setName("Guardian");
	setHP(40);
	setMP(25);
	setAP(1);
	setDP(3);
}

Guardian::~Guardian()
{
}



