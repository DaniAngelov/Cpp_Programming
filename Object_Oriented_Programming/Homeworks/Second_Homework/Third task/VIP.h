#pragma once
#include "User.h"

class VIP : virtual public User
{
public:
	VIP();
	VIP(const char* IPaddress, const char * username,
		const char * title, const char * password);
	~VIP();

	void setTitle(const char* title);
	
	void print()const;
};