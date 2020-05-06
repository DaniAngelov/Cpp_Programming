#include "Store.h"

void Store::increaseSize()
{
	this->size++;
}

void Store::decreaseSize()
{
	if(getSize() >0)
	this->size--;
}

void Store::resize()
{
	increaseCap();
	Product** newProducts = new Product*[getCap()];
	for (int i = 0; i < getSize(); i++)
		newProducts[i] = this->products[i];
	delete[] this->products;
	this->products = newProducts;
}

void Store::increaseCap()
{
	if (getCap() == 0)
		this->cap = 2;
	else
		this->cap *= 2;
}

int Store::getCap() const
{
	return this->cap;
}

Store::~Store()
{
	for (int i = 0; i < getSize(); i++)
	{
		delete products[i];
	}
	delete[] products;
}

bool Store::removeProduct(unsigned int index)
{
	if (index >= getSize())
		return 0;
	else
	{
		delete products[index];
		for (int i = index; i < getSize() - 1; i++)
		{
			products[i] = products[i + 1];
		}
		decreaseSize();
		return 1;
	}
}

bool Store::changeProduct(unsigned int index, const Product & p)
{
	if (index >= getSize())
		return 0;
	else
	{
		delete products[index];
		products[index] =
			new Product(p.getBrand(), p.getModel(), p.getPrice(), p.getCount());
		return 1;
	}
}

void Store::addProduct(const Product & p)
{
	if (getSize() == getCap())resize();

	increaseSize();

	products[getSize() - 1] =
		new Product(p.getBrand(), p.getModel(), p.getPrice(), p.getCount());
}

void Store::printStore() const
{
	for (int i = 0; i < getSize(); i++)
		products[i]->print();
}

int Store::getSize() const
{
	return this->size;
}
