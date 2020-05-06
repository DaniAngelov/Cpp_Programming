#include "Guest.h"


void Guest::setIPaddress(const char * IPaddress)
{
	delete[] this->IPaddress;
	this->IPaddress = new char[strlen(IPaddress) + 1];
	strcpy_s(this->IPaddress, strlen(IPaddress) + 1, IPaddress);
}

const char * Guest::getIPaddress() const
{
	return this->IPaddress;
}

Guest::Guest()
{
	setIPaddress("def");
}

Guest::Guest(const char * IPaddress)
{
	setIPaddress(IPaddress);
}

Guest::Guest(const Guest& g)
{
	setIPaddress(g.getIPaddress());
}

Guest::~Guest()
{
	delete[] this->IPaddress;
}

void Guest::print() const
{
	cout << " The IP address of the guest is: " << getIPaddress() << endl
		<< "------------------------------------------" << endl;
}


