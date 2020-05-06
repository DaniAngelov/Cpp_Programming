/**
*
* Solution to homework task 4
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
*

* @author Jordan Angelov
* @idnumber 62263
* @task 4
* @compiler VSC
*
*/


#include <iostream>
using namespace std;
int main() 
{	
														// Top part of the square


	int side;											// Variable for side of the square
	int k = 0;											// Variable used for  the symbols
	cout << "Enter side for the square:" << endl;
	cin >> side;
	if (cin.fail())
	{
		cout << "Wrong input ! Please enter number:" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> side;
	}
	for (int i = 0; i < side; i++)
	{
		int j = side - i  ;								// Additional variable for the loops
		while(j >0)
		{
			cout << "  ";								// Loop for the spaces
			j--;
		}
		for (j = 0; j < 2 * k + 1; j++)					// Loop for the symbols
		{
			cout << "* ";
		}
		k++;
		cout << endl;
	}

														// Bottom part of the square
	for (int i = side; i >= 0; --i)
	{
		int j = 0;
		while (j < side - i + 1)						// Loop for the spaces
		{
			cout << "  ";
			++j;
		}
		for (int j = i; j <= 2 * i - 1; ++j)			// Loop for symbols
		{
			cout << "* ";
		}
		for (int j = 0; j < i - 1; ++j)					// Additional loop
		{
			cout << "* ";
		}
		cout << endl;
	}
	
	

	system("pause");
	return 0;
}