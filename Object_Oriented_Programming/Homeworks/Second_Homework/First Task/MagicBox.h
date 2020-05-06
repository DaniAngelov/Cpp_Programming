#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

#define MAX 100

template<class T>
class MagicBox
{
private:


	T* elements = new T[MAX];
	int size = 0;
	void increaseSize();
	void decreaseSize();
	int getSize()const;


public:

	MagicBox();
	MagicBox(T var);
	MagicBox(const MagicBox& m);
	~MagicBox();



	void insert(T element);
	void pop();
	void list()const;

};

template<class T>
void MagicBox<T>::increaseSize()
{
	this->size++;
}

template<class T>
void MagicBox<T>::decreaseSize()
{
	this->size--;
}

template<class T>
int MagicBox<T>::getSize() const
{
	return this->size;
}

template<class T>
inline MagicBox<T>::MagicBox()
{
	
}

template<class T>
inline MagicBox<T>::MagicBox(T var)
{
	
}

template<class T>
inline MagicBox<T>::MagicBox(const MagicBox & m)
{
	setVar(m.getVar());
}

template<class T>
inline MagicBox<T>::~MagicBox()
{
	delete[] this->elements;
}


template<class T>
inline void MagicBox<T>::insert(T element)
{
	
	for (int i = getSize(); i < getSize() + 1; i++)
	{
		this->elements[i] = element;
		
	}
	increaseSize();
	
}

template<class T>
inline void MagicBox<T>::pop()
{
	srand((unsigned int)time(NULL));

	if (size == 0)
		cout << "The Box is empty !" << endl;
	else
	{
		decreaseSize();
		if (getSize() != 0)
		{
			for (int i = rand() % getSize(); i < getSize(); i++)
				elements[i] = elements[i + 1];
		}
	}

		
}

template<class T>
inline void MagicBox<T>::list() const
{

		cout << "Elements in the Box: " << endl;
		for (int i = 0; i < getSize(); i++)
		{
			cout << elements[i] << endl;
		}
	
}

