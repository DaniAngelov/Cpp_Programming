#include "Point2D.h"
#include "Point3D.h"
#include "Entity.h"
#include "Player.h"
#include "NPC.h"
#include "Environment.h"
#include "Mob.h"


int main()
{
	Environment e;
	Point2D a(1,2);
	Point2D q(3,5);
	Point3D f(1, 5, 7);
	Point3D m(2, 7, 3);
	Player p(50, 10, "Player1", &m);
	Player k(50, 20, "Player2", &a);
	NPC n("npc1", &f);
	Mob h(50, 50, "Mob1", &q);
	Mob o(30, 80, "Mob2", &a);
	
	k.moveTo(&q);
	k.print();
	k.getDistanceTo2D(p);


	cin.get();
	return 0;
}