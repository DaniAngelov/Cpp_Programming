#pragma once
#include "VIP.h"
#include "PowerUser.h"

class Admin : public VIP, PowerUser
{
public:
	
	Admin();
	Admin(const char* IPaddress, const char* username, const char* title,
		const char* password);
	~Admin();

	void changeAnotherUsername( User& u, const char* username);
	void setUsername(const char* username);

	void print()const;
};