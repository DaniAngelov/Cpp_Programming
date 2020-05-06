#include "VIP.h"

VIP::VIP()
{
}

VIP::VIP(const char * IPaddress, const char * username, 
	const char * title, const char * password) : User(IPaddress,username,title,password)
{
}

void VIP::setTitle(const char * title)
{
	if (strcmp(this->title, title) == 0)
	{
		cout << "The title is the same! Enter a different one ! " << endl;

	}
	else if (strcmp(this->title, title) != 0)
	{
		delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);
	}
}


VIP::~VIP()
{
}

void VIP::print() const
{
	cout << "The IP address of the VIP  is: " << getIPaddress() << endl
		<< "The Username of the VIP  is: " << getUsername() << endl
		<< "The Password of VIP  is: " << getPassword() << endl
		<< "The Title of VIP  is: " << getTitle() << endl
		<< "------------------------------------------" << endl;
}

