
#pragma once
#include "Entity.h"
#include "Player.h"
#include "Mob.h"
#include "NPC.h"
#include <vector>

class Environment
{
private:
	std::vector<Entity*> entities;


	template <class T>
	std::vector<T*> EntriesType() const
	{
		std::vector<T*> RequestedType;
		for (Entity* thistype : this->entities)
		{
			if (typeid(*thistype) == typeid(T))
			{
				RequestedType.push_back(static_cast<T*>(thistype));
			}
		}

		return RequestedType;
	}

	static bool is_closer( Entity& source, const Entity* one, const Entity*& two);
public:


	Environment();
	static Environment& get_instance();

	~Environment();

	Environment(const Environment& e);

	Environment& operator=(const Environment& other);

	void add(const Entity& e);

	const Entity& getAt(int index);

	void removeAt(int index);

	void generateEntities();

	void destroyEntities();

	const Entity* getClosestAliveEntity(Player& p, Type t);

	template <class T>
	std::vector<T*> SortedByDistance(const Player& p) const
	{
		std::vector<T*> sorted = this->EntriesType<T>();
		std::sort(sorted.begin(), sorted.end(),
			[p](const Entity *  one, const Entity * two)
		{
			return is_closer(p, one, two);
		});

		return sorted;
	}
};
