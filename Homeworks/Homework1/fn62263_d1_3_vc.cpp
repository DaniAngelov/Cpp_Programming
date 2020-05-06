
/**
*
* Solution to homework task 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
*

* @author Jordan Angelov
* @idnumber 62263
* @task 3
* @compiler VSC
*
*/

#include <iostream>
using namespace std;
int main()
{
	int operand1, operand2, operation;   
	int result = 0;
	cout << "Insert numbers and operation:";
	cin >> operand1 >> operand2 >> operation;
	if (cin.fail())
	{
		cout << "please insert proper numbers and operation" << endl;			// symbol check
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> operand1 >> operand2 >> operation;
	}

	if (operand1 < 0 || operand1 >15 || operand2 < 0 || operand2 > 15)			
		cout << "wrong input" << endl;
	else {


		if (operation == 0)
			result = operand1 + operand2;	
																				// different operations
		else if (operation == 1)
			result = operand1 - operand2;

		else if (operation == 2)
			result = operand1 * operand2;

		else if (operation == 3)
			result = operand1 / operand2;

		if (result > 0 && result < 16)											
			cout << "The result is:" << result << endl;
		else
		{
			if (result < 0)														
			{
				result += 16;
				cout << "The result is:" << result << endl;
			}



			if (result > 15)													
			{
				while (result > 15)
				{
					result -= 16;
				}
				cout << "The result is:" << result << endl;
			}

		}
	}
	system("pause");
		return 0;
}