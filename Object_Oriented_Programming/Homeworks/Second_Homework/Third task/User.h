#pragma once
#include "Guest.h"
#include <iostream>
using namespace std;


class User : protected Guest
{
private:
	void setUsername(const char* username);;
	void setTitle(const char* title);
	void setPassword(const char* password);
	
	friend class Admin;

protected:
	char* username = nullptr;
	char* title = nullptr;
	char* password = nullptr;

public:
	User();
	User(const char* IPaddress,const char* username, const char* title, const char* password);
	User(const User& u);
	~User();


	 const char* getUsername()const;
	 const char* getTitle()const;
	const char* getPassword()const;
	

	void ChangePassword(const char* oldpassword, const char* newpassword);
	void print()const;

	


};