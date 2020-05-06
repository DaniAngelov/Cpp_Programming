#include "Product.h"
#include <iostream>

unsigned int SKU = 0;

void Product::increaseSKU()
{
	this->currSKU = SKU;
	SKU++;
}

unsigned int Product::getcurrSKU() const
{
	return this->currSKU;
}
void Product::setBrand(const char* brand)
{
	if (this->brand) delete[] this->brand;
	this->brand = new char[strlen(brand) + 1];
	strcpy_s(this->brand, strlen(brand) + 1, brand);
}

 char * Product::getBrand() const
{
	return this->brand;
}

void Product::setModel(const char * model)
{
	if (this->model) delete[] this->model;
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}

char * Product::getModel() const
{

	return this->model;
}

void Product::setPrice(int price)
{
	this->price = price;
}

int Product::getPrice() const
{
	return this->price;
}

void Product::setCount(int count)
{
	this->count = count;
}

int Product::getCount() const
{
	return this->count;
}

void Product::print() const
{
	cout << "Prod. SKU: " << getcurrSKU() << endl
		<< "Prod. Brand: " << getBrand() << endl
		<< "Prod. Model: " << getModel() << endl
		<< "Prod. Price: " << getPrice() << endl
		<< "Prod. Count: " << getCount() << endl;
}

Product::Product()
{
	increaseSKU();
	setBrand("def");
	setModel("def");
	setPrice(1);
	setCount(1);
}

Product::Product(const char * model, const char * brand, unsigned int price, unsigned int count)
{
	increaseSKU();
	setBrand(brand);
	setModel(model);
	setPrice(price);
	setCount(count);
}

Product::Product(const Product & p)
{
	increaseSKU();
	setBrand(p.brand);
	setModel(p.model);
	setPrice(p.price);
	setCount(p.count);
}

Product::~Product()
{
	delete[] brand;
	delete[] model;
}

ostream & operator<<(ostream & os, Product & p)
{
	os << "SKU " << p.getcurrSKU() << endl
		<< "Brand " << p.getBrand() << endl
		<< "Model " << p.getModel() << endl
		<< "Price " << p.getPrice() << endl
		<< "Count " << p.getCount() << endl;

	return os;
}

void Product:: setSKU(int currSKU)
{
	this->currSKU = SKU;
}

istream & operator>>(istream & is, Product & p)
{
	char charInput[255];
	int intInput;

	is >> intInput;
	p.setSKU(intInput);

	is >> charInput;
	p.setBrand(charInput);

	is >> charInput;
	p.setModel(charInput);

	is >> intInput;
	p.setPrice(intInput);

	is >> intInput;
	p.setCount(intInput);

	return is;
}