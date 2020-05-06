#pragma once
#include <iostream>
using namespace std;

class GameCharacter
{

private:
	char* name = nullptr;
	unsigned int HP = 0;
	unsigned int MP = 0;
	unsigned int AP = 0;
	unsigned int DP = 0;


public:

	GameCharacter();
	GameCharacter(const GameCharacter& ch);
	GameCharacter(const char* name, unsigned int HP, unsigned int MP,
		unsigned int AP, unsigned int DP);
	~GameCharacter();

	void setName(const char* name);
	const char* getName()const;
	void setHP(unsigned int HP);
	unsigned int getHP()const;
	void setMP(unsigned int MP);
	unsigned int getMP()const;
	void setAP(unsigned int AP);
	unsigned int getAP()const;
	void setDP(unsigned int DP);
	unsigned int getDP()const;

	void getattacked(int enemyattack);
	void print()const;
};