#pragma once
#include "GameCharacter.h"

class Wizzard : public GameCharacter
{
public:
	Wizzard();
	Wizzard(const char* name, unsigned int HP, unsigned int MP,
		unsigned int AP, unsigned int DP);
	~Wizzard();

};