#include "DNSRecord.h"

DNSRecord::DNSRecord()
{
	setdomainName("def");
	setipAddress("def");
}

DNSRecord::DNSRecord(const DNSRecord& r)
{
	setdomainName(r.getdomainName());
	setipAddress(r.getipAddress());
}

DNSRecord::~DNSRecord()
{
	delete[] this->domainName;
	delete[] this->ipAddress;
}

void DNSRecord::setdomainName(const char* domainName)
{
	delete[] this->domainName;
	this->domainName = new char[strlen(domainName) + 1];
	strcpy_s(this->domainName, strlen(domainName) + 1, domainName);
}

const char* DNSRecord::getdomainName()const
{
	return this->domainName;
}

void DNSRecord::setipAddress(const char* ipAddress)
{
	delete[] this->ipAddress;
	this->ipAddress = new char[strlen(ipAddress) + 1];
	strcpy_s(this->ipAddress, strlen(ipAddress) + 1, ipAddress);
}

const char* DNSRecord::getipAddress()const
{
	return this->ipAddress;
}
ostream& operator<<(ostream& os, const DNSRecord& r)
{
	os << "Record domain name: " << r.getdomainName() << endl
		<< "Record IP address: " << r.getipAddress() << endl
		<< "-----------------" << endl;
	return os;
}
istream& operator>>(istream& is, DNSRecord& r)
{
	char strInput[255];
	is >> strInput;
	r.setdomainName(strInput);
	is >> strInput;
	r.setipAddress(strInput);
	return is;
}

DNSRecord &DNSRecord::operator=(const DNSRecord &r)
{
	setdomainName(r.getdomainName());
	setipAddress(r.getipAddress());
	

	return *this;
}