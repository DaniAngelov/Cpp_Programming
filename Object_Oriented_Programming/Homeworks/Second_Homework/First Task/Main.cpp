#include "MagicBox.h"
#include "Rational.h"
#include <iostream>
using namespace std;

int main()
{
	MagicBox<int> a;
	MagicBox<Rational> b;
	MagicBox<char> m;

	Rational k(1, 5);
	Rational s(2, 3);
	Rational f(5, 8);
	
	a.insert(1);
	a.insert(2);
	a.insert(3);
	a.pop();
	a.list();

	b.insert(k);
	b.insert(s);
	b.insert(f);
	b.pop();
	b.list();

	m.insert('a');
	m.insert('b');
	m.insert('c');
	m.pop();
	m.list();

	
	cin.get();
	return 0;
}
