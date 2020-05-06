/**
*
* Solution to homework task 5
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
*

* @author Jordan Angelov
* @idnumber 62263
* @task 5
* @compiler VSC
*
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	

	double x;													//x axis variable
	double y;													//y axis variable
	const int R1 = 1;											// small radius(thirtiary)
	const int R2 = 3;											// medium radius(secondary)
	const int R3 = 6;											// big radius(primary)

	cout << "Enter coordinates :" << endl;
	cin >> x >> y;
	if (cin.fail())
	{
		cout << "Wrong input ! Please enter proper coordinates:" << endl;		//symbol check
		cin.clear();
		cin.ignore(10000, '\n');
		cin >> x >> y;
	}

	if (x > 5 || y > 5 || y < -5 || x < -5)
		cout << "Outside"<<endl;

	else if (x >=0 && y >=0)									//1 quadrant
	{
		
				

		if ((x >= 0 && x <= 1) && (y >= 2 && y <= 4))			// limit values for variables
		{
			double d1 = sqrt ((pow(x, 2)) + (pow( (y-3), 2)));  // small radius

			if (d1 < R1)
			{
				cout << "Black" << endl;

			}
			else if (d1 == R1)
			{
				cout << "Undefined"<<endl;
			}
		}

		else if ((x >= 1 && x <= 3) && (y >= 0 && y <= 6))			// limit values for variables
		{
			double d2 = sqrt ((pow(x, 2)) + (pow( (y-3), 2)));		// medium radius for quadrant 1

			if (d2 < R2)
				cout << "White"<<endl;
			
			else if (d2 == R2)
				cout << "Undefined"<<endl;
			
		}
		else 
		{
			double d3 = sqrt((pow(x, 2)) + ((pow(abs(y), 2))));			//large radius
		
	 if (d3 < R3)
		cout << "Black"<<endl;

	else if (d3 == R3)
		cout << "Undefined"<<endl;
		}
	}


	else if (x <= 0 && y >=0)										//2 quadrant
	{
		if ((x <=0 && x >= -1) && (y >= 2 && y <= 4))				// limit values for variables
		{
			double d1 = sqrt((pow(x, 2)) + (pow((y - 3), 2)));		//small radius

			if (d1 < R1)
				cout << "Black" << endl;

			
			else if (d1 == R1)
				cout << "Undefined" << endl;

		}

		else {
			double d3 =  sqrt((pow(x, 2)) + (pow((y), 2)));			 //large radius
			if (d3 <R3)
				cout << "White" << endl;
			

			else if (d3 ==R3)
				cout << "Undefined" << endl;
			
		}
	}


	else if (x <= 0 && y <= 0)										//3 quadrant
	{
		if ((x <=0 && x >=-1) && (y >= -2 && y <= -4))				// limit values for variables
		{
			double d1 = sqrt((pow(x, 2)) + (pow((y + 3), 2)));		//small radius


			if (d1 < R1)
				cout << "White" << endl;

			else if (d1 == R1)
				cout << "Undefined" << endl;

		}

		else if ((x >= -3 && x <= -1) && (y <= 0 && y >= -6))		// limit values for variables
		{
			double d2 = sqrt((pow(x, 2)) + (pow((y + 3), 2)));		 // medium radius

			if (d2 < R2)
				cout << "Black" << endl;
			
			else if (d2 == R2)
				cout << "Undefined" << endl;
			
		}
		else {
			double d3 = sqrt((pow(x, 2)) + (pow((y), 2)));			//large radius

			if (d3 <R3)
				cout << "White" << endl;

			else if (d3 == R3)
				cout << "Undefined" << endl;

		}
	}


		else if (x >= 0, y <= 0)									//4 quadrant
		{
		if ((x >=0 && x <= 1) && (y <= -2 && y >= -4))				// limit values for variables
		{		
			double d1 = sqrt((pow(x, 2)) + (pow((y + 3), 2))); 		 //small radius 
			if (d1 < R1)
				cout << "White" << endl;
			

			else if (d1 == R1)
				cout << "Undefined" << endl;
			
		}
		else {

			double d3 = sqrt((pow(x, 2)) + (pow((y), 2)));			//large radius 

			if (d3 <R3)
			
				cout << "Black" << endl;
			

			else if (d3 == R3)
		
				cout << "Undefined" << endl;
			
		}
		}
		
	
	

		system("pause");
		return 0;
	} 
	









