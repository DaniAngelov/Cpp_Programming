#include "User.h"

User::User()
{
	setUsername("def");
	setTitle("def");
	setPassword("def");
}

User::User(const char* IPaddress, const char * username, 
	const char * title, const char * password) : Guest(IPaddress)
{
	setUsername(username);
	setTitle(title);
	setPassword(password);
}

User::User(const User & u)
{
	setUsername(u.username);
	setTitle(u.title);
	setPassword(u.password);
}

User::~User()
{
	delete[] this->username;
	delete[] this->title;
	delete[] this->password;
}



	void  User::setUsername(const char * username)
	{

		delete[] this->username;
		this->username = new char[strlen(username) + 1];
		strcpy_s(this->username, strlen(username) + 1, username);

	}

	const char * User::getUsername() const
	{
		return this->username;
	}

	void User::setTitle(const char * title)
	{

		delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);

	}

	const char * User::getTitle() const
	{
		return this->title;
	}


void User::setPassword(const char * password)
{
	delete[] this->password;
	this->password = new char[strlen(password) + 1];
	strcpy_s(this->password, strlen(password) + 1, password);

	

	// password encryption
	char key = 'K';
	string encryptedpass = password;

	for (int i = 0; i < strlen(password); i++)
	{
		encryptedpass[i] = password[i] ^ key;
		this->password[i] = encryptedpass[i];
	}
}

const char * User::getPassword() const
{
	return this->password;
}

void User::ChangePassword(const char * oldpassword, const char* newpassword)
{
	if (strlen(oldpassword) != strlen(this->password))
	{
		cout << "The Password is not changed ! " << endl;
		return;
	}
	else
	{
	
		setPassword(newpassword);
	}
}


void User::print() const
{
	cout << "The IP address of the User is: " << getIPaddress() << endl
		<< "The Username of the User is: " << getUsername() << endl
		<< "The Password of the User is: " << getPassword() << endl
		<< "The Title of the User is: " << getTitle() << endl
		<< "------------------------------------------" << endl;
}
