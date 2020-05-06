
/**
*
* Solution to homework task 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
*

* @author Jordan Angelov
* @idnumber 62263
* @task 1
* @compiler VSC
*
*/

#include <iostream>
using namespace std;
int main()
{
	int num = 1;
	int  min, counter = 0, max;									// counts the times the user entered a number
	const int MAX_VALUE = 65536;								// Max value which num can be = pow (2,16)

		while (num > 0 && num < MAX_VALUE)
		{

			cout << "Enter positive numbers ( or negative number to stop):\n";
			cin >> num;
			if (cin.fail())
			{
				cout << "Wrong input ! Please enter number:" << endl;
				cin.clear();
				cin.ignore(10000, '\n');
				cin >> num;
			}


			if (counter == 0)
			{
				max = num;
				min = num;

			}


			else
			{
				if (num > max)
					max = num;
				else if (num < min && num > 0)
					min = num;
			}
			counter++;

		}
		if (counter == 2) 
			cout << "error (enter at least 2 numbers)" << endl;
		
		else 
			cout << "The result of absolute value is:" << -(min - max) << endl;
		

		system("pause");
		return 0;
	}


