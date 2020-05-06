#pragma once
#include "Product.h"
#include <iostream>
using namespace std;

class Store
{
private:
	Product** products;
	int size = 0;
	int cap = 0;

	void increaseSize();
	void decreaseSize();
	void resize();
	void increaseCap();
	int getCap()const;
public:
	
	~Store();
	bool removeProduct(unsigned int);
	bool changeProduct(unsigned int, const Product&);
	void addProduct(const Product&);
	void printStore()const;
	int getSize()const;


};