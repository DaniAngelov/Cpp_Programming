
/**
*
* Solution to homework task 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
*

* @author Jordan Angelov
* @idnumber 62263
* @task 2
* @compiler VSC
*
*/


#include <iostream>
using namespace std;
int main()
{
	long long int a;										// "a" is the number the user enters
	long long int d;										// "d" is the number of digits in the number
	int counter = 0;										// "count" is a variable for counting the number of digits and going in the loop 
	cout << "Insert number:" << endl;
	cin >> a;
	if (cin.fail())											// symbol check
	{
			cout << "Error: insert integer :" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			cin >> a;
	}
	
	cout << "Insert digit you want to search  for:" << endl;
	cin >> d;
	if (cin.fail())
	{
		cout << "Error - insert integer :" << endl;
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> d;
	}
	
		if (a < 0)
		{
			a = -a;												// in case "a" is negative
		}
		while (a)
		{
			if (a % 10 == d) {
				counter++;
			}
			a /= 10;
		}
		cout << " The number of " << d << "s" << " are: " << counter << endl;

	
	system("pause");
	return 0;
}