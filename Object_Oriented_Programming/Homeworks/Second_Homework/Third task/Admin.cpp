#include "Admin.h"

Admin::Admin()
{
	
}

Admin::Admin(const char * IPaddress, const char * username,
	const char * title, const char * password) : User(IPaddress, username, title, password)
{
	
}

Admin::~Admin()
{
}

void Admin::changeAnotherUsername( User & u, const char * newUsername)
{
	if (strcmp(newUsername, u.getUsername()) == 0)
	{
		cout << "The title is the same! Enter a different one ! " << endl;

	}
	else if (strcmp(newUsername, u.getUsername()) != 0)
	{
		delete[] u.username;
		u.username = new char[strlen(newUsername) + 1];
		strcpy_s(u.username, strlen(newUsername) + 1, newUsername);
	}
}

void Admin::setUsername(const char * username)
{
	if (strcmp(this->username, username) == 0)
	{
		cout << "The title is the same! Enter a different one ! " << endl;

	}
	else if (strcmp(this->username, username) != 0)
	{
		delete[] this->username;
		this->username = new char[strlen(username) + 1];
		strcpy_s(this->username, strlen(username) + 1, username);
	}
}

void Admin:: print()const
{
	cout << "The IP address of th eAdmin is: " << getIPaddress() << endl
		<< "The Username of the Admin is: " << getUsername() << endl
		<< "The Password of the Admin is: " << getPassword() << endl
		<< "The Title of the Admin is: " << getTitle() << endl
		<< "The Reputation of the Admin is: " << getReputation() << endl
		<< "------------------------------------------" << endl;
}


