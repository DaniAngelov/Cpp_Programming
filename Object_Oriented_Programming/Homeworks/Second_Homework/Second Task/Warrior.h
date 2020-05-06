#pragma once
#include "GameCharacter.h"

class Warrior : public GameCharacter
{
public:

	Warrior();
	Warrior(const char* name, unsigned int HP, unsigned int MP,
		unsigned int AP, unsigned int DP);
	~Warrior();

};