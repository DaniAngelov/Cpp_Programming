#pragma once
#include "Entity.h"

class NPC : public Entity
{

public:
	NPC();
	NPC(const char* name, Point2D* p);
	NPC(const NPC& npc);
	~NPC();


	Type npc;
	bool isAlive()override;
};