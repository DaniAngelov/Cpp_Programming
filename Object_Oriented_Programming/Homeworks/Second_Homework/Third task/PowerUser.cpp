#include "PowerUser.h"

PowerUser::PowerUser()
{
	this->reputation = 0;
}

PowerUser::PowerUser(const char * IPaddress, const char * username,
	const char * title, const char * password) : User(IPaddress, username, title, password)
{

}

PowerUser::~PowerUser()
{
}

const int PowerUser::getReputation() const
{
	return this->reputation;
}

void PowerUser::reputationIncrease(const User & u)
{
	if (strcmp(this->username, u.getUsername()) != 0)
	{
		this->reputation++;
		cout << " The user '" << u.getUsername() << "' gave you reputation !" << endl;
	}
	
}

void PowerUser::print()const
{
	cout << "The IP address of the Power User is: " << getIPaddress() << endl
		<< "The Username of the Power User is: " << getUsername() << endl
		<< "The Password of the Power User is: " << getPassword() << endl
		<< "The Title of the Power User is: " << getTitle() << endl
		<< "The Reputation of the Power User is: " << getReputation() << endl
		<< "------------------------------------------" << endl;
}
