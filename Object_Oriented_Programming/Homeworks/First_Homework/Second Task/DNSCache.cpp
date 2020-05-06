#include "DNSCache.h"
int n;
		  //global variable for counter

void DNSCache::increaseSize()
{
	this->size++;
}
void DNSCache::decreaseSize(int n)
{
		this->size = n;
}
void DNSCache::resize()
{
	DNSRecord* newRecords = new DNSRecord[getSize() + 1];
	for (int i = 0; i < getSize(); i++)
		newRecords[i] = this->records[i];
	delete[] this->records;
	this->records = newRecords;
	increaseSize();
}

DNSCache::DNSCache() {};

DNSCache::DNSCache(const DNSCache& c)
{
	*this = c;
}
DNSCache::~DNSCache()
{
	delete[] this->records;
}

bool DNSCache::addRecord(const DNSRecord& r)
{
	resize();
	this->records[getSize()- 1] = r;
	return true;
}

const char* DNSCache::lookup(const DNSRecord& r)
{
	if (addRecord(r) == true)
	{
		return r.getipAddress();
	}
	else return NULL;
}

void DNSCache::flush()
{
	
	decreaseSize(n);
	for (int i = 0; i < getSize(); i++)
	{
		
		this->records[i] = this->records[i + 1];
		n++;
		
	}
}

void DNSCache::print()const
{
	for (int i = 0; i < getSize() ; i++)
		cout << records[i];
}

const int DNSCache::getSize()const
{
	return this->size;
}
DNSCache & DNSCache::operator=(const DNSCache &c)
{
	if (this == &c)
		return *this;

	delete[] this->records;

	for (int i = 0; i < c.getSize(); i++)
		this->addRecord(c[i]);
}

DNSRecord DNSCache::operator[](int index) const
{
	if (index >= getSize()) return DNSRecord();
	else return records[index];
}