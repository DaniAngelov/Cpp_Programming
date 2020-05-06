#pragma once
#include "User.h"

class PowerUser : virtual public User
{
private:
	 int reputation = 0;
public:

	PowerUser();
	PowerUser(const char* IPaddress, const char * username,
		const char * title, const char * password);
	~PowerUser();

	const int getReputation()const;

	void print()const;
	 void reputationIncrease(const User& u);
};