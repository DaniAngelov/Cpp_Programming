#include "NPC.h"

NPC::NPC()
{
	increaseID();
	setName("");
	setLocation(nullptr);

}

NPC::NPC(const char * name, Point2D* location) : Entity(name,location)
{

}

NPC::NPC(const NPC & npc)
{
	increaseID();
	setName(npc.getName());
	setLocation(npc.getLocation());
}

NPC::~NPC()
{
}

bool NPC::isAlive()
{
	return true;
}
