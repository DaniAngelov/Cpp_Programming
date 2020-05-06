#pragma once
#include <iostream>
#include <string>
using namespace std;


class Guest
{
protected:
	char* IPaddress = nullptr;
	void setIPaddress(const char* IPaddress);
	const char* getIPaddress()const;

public:
	
	Guest();
	Guest(const char* IPaddress);
	Guest(const Guest& g);
	~Guest();

	void print()const;
};
