#pragma once
#include <iostream>
#include "string.h"
using namespace std;

extern unsigned int SKU;


class Product
{
private:
	unsigned int currSKU;
	char* brand = nullptr;
	char* model = nullptr;
	unsigned int price;
	unsigned int count;
public:

	Product();													// constructors
	Product(const char*, const char*,unsigned int, unsigned int);
	Product(const Product&);
	~Product();

	void increaseSKU();		
	void setSKU(int currSKU);
	unsigned int getcurrSKU()const;		//setters and getters
	void setBrand(const char*);
	 char* getBrand()const;

	void setModel(const char*);
	 char* getModel()const;

	void setPrice(int);
	int getPrice()const;

	void setCount(int);
	int getCount()const;

	void print()const;

	friend ostream & operator>>(ostream & os, const  Product & p);
	friend istream & operator>>(istream & is, Product & p);
};
