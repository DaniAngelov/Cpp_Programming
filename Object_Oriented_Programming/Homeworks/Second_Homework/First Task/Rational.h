#pragma once
#include <iostream>
using namespace std;
// class Rational

class Rational
{
private:
	int numer, denom;
	int gcd(int, int);

public:

	Rational();
	Rational(int, int);

	int getNumerator() const;
	int getDenominator() const;

	void read();
	void print() const;
	friend ostream& operator<<(ostream& out, const Rational& rat);
};


Rational::Rational() {
	numer = 0;
	denom = 1;
}


Rational::Rational(int n, int d) {
	if (n == 0 || d == 0) {
		numer = 0;
		denom = 1;
	}
	else {
		int g = gcd(abs(n), abs(d));
		if (n > 0 && d > 0 || n < 0 && d < 0) {
			numer = abs(n) / g;
			denom = abs(d) / g;
		}
		else {
			numer = -abs(n) / g;
			denom = abs(d) / g;
		}
	}
}

int Rational::getNumerator() const {
	return numer;
}

int Rational::getDenominator() const {
	return denom;
}
void Rational::read() {

	cin >> numer;
	cin.ignore();
	cin >> denom;
}

int Rational::gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

void Rational::print() const {
	cout << getNumerator() << '/' << getDenominator();
}

ostream& operator<<(ostream& out, const Rational& rat) {
	out << rat.numer;
	if (rat.numer != 0 && rat.denom != 1) {
		out << "/" << rat.denom;
	}
	return out;
}