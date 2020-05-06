#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class DNSRecord
{
private:
	char* domainName = nullptr;
	char* ipAddress = nullptr;
public:
	DNSRecord();					//constructors
	DNSRecord(const DNSRecord&);
	~DNSRecord();

	void setdomainName(const char*);			//setters and getters
	const char* getdomainName()const;

	void setipAddress(const char*);			
	const char* getipAddress()const;

	friend ostream& operator<<(ostream&, const DNSRecord&);		//operator functions
	friend istream& operator>>(istream&,  DNSRecord&);
	DNSRecord& operator=(const DNSRecord &r);
	
};