#pragma once
#include "GameCharacter.h"

class Guardian: public GameCharacter
{
public:
	Guardian();
	Guardian(const char* name, unsigned int HP, unsigned int MP,
		unsigned int AP, unsigned int DP);
	~Guardian();

};