#include "GameCharacter.h"
#include "Guardian.h"
#include "Warrior.h"
#include "Wizzard.h"
#include <iostream>
using namespace std;

int main()
{
	GameCharacter g;
	GameCharacter p = g;
	Guardian f;
	Wizzard w;
	Warrior k;
	k.getattacked(14);
	k.print();
	

 int _;
 cin >> _;
 return 0;
}