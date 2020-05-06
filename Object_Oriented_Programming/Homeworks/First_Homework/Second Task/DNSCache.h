#pragma once
#include "DNSRecord.h"
#include <iostream>
using namespace std;

class DNSCache
{
private:
	DNSRecord* records = nullptr;
	int size = 0;
	void resize();
	void increaseSize();
	void decreaseSize(int n);
public:
	DNSCache();						//constructors
	DNSCache(const DNSCache&);
	~DNSCache();

	bool addRecord(const DNSRecord&);
	const char* lookup(const DNSRecord&);
	void flush();						// functions 
	void print()const;
	const int getSize()const;

	DNSRecord operator[](int index) const;		// operators
	DNSCache& operator=(const DNSCache&);
};