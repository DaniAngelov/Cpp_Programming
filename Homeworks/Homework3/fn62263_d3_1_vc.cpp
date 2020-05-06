/**
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Jordan Angelov
* @idnumber 62263
* @task 1
* @compiler VC
*
*/

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
	int m = 32;												// constants used in the loops later for the positions
	int n = 41;												// of the elements in the char array
	int p = 0;												// we use m and n in order to signify the start and end of some of the Chars
	char Blank[5][8] =										// p is a counter for the Blank array char later
	{
	{ ' ' ,' ', ' ', ' ', ' ',' ', ' ', ' '},				// char array for blank spaces used later
	{ ' ' ,' ', ' ', ' ', ' ',' ', ' ', ' '},
	{ ' ' ,' ', ' ', ' ', ' ',' ', ' ', ' '},
	{ ' ' ,' ', ' ', ' ', ' ',' ', ' ', ' '},
	{ ' ' ,' ', ' ', ' ', ' ',' ', ' ', ' '},
	}
	;
		
	char H[5][41] =
	{
	{ 'H' ,' ', ' ', ' ', 'H',' ', ' ', ' ','E' ,'E', 'E', 'E', 'E',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ',' ' ,' ', ' ', ' ','O', ' ', ' ', ' ', ' ' },
	{ 'H' ,' ', ' ', ' ', 'H',' ', ' ', ' ','E' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ',' ' ,' ', 'O', ' ',' ', ' ', 'O', ' ', ' ' },
	{ 'H' ,'H', 'H', 'H', 'H',' ', ' ', ' ','E' ,'E', 'E', 'E', 'E',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ','O' ,' ', ' ', ' ',' ', ' ', ' ', ' ', 'O' },
	{ 'H' ,' ', ' ', ' ', 'H',' ', ' ', ' ','E' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ','L' ,' ', ' ', ' ', ' ',' ', ' ', ' ',' ' ,' ', 'O', ' ',' ', ' ', 'O', ' ', ' ' },
	{ 'H' ,' ', ' ', ' ', 'H',' ', ' ', ' ','E' ,'E', 'E', 'E', 'E',' ', ' ', ' ','L' ,'L', 'L', 'L', 'L',' ', ' ', ' ','L' ,'L', 'L', 'L', 'L',' ', ' ', ' ',' ' ,' ', ' ', ' ','O', ' ', ' ', ' ', ' ' },
	}
	;	// char array of the "HELLO"

	for (int t = 0; t < 5; t++)				// loop for adding spaces
	{
		for (int j = 0; j < 25; j++)
		{
			cout << " ";
			cout << endl;
		}
		for (int i = 0; i <= 4; i++)		// prints the elements of the array ( starting from the 'O')
		{
			for (int k = m; k < 41; k++)
			{
				cout << H[i][k];

			}
			cout << endl;
		}
		system("CLS");
		std::this_thread::sleep_for(std::chrono::nanoseconds(1));		// slows the movement of the characters
		m -= 8;

	}
	m = 0;

	for (int k = 0; k < 35; k++)					// main loop for moving the symbols in the array
	{
		if (k > 30 && k < 35)						
		{
			for (int t = 0; t < 5; t++)
			{
				for (int j = 0; j < 25; j++)
				{
					cout << " ";
					cout << endl;
				}


				for (int i = 0; i <= 4; i++)					
				{
					for (int q = 0; q < k; q++)
					{
						cout << "     ";		
					}
					for (int z = 0; z < p; z++)				// we use this loop to go to the exact location 	
					{										// just before the disappearing of the letter at the end
						for (int f = 0; f < 8; f++)
						{
							cout << Blank[i][f];				
						}
					}

					for (int k = 0; k < n; k++)				// with this loop we move the letters 
					{
						cout << H[i][k];

					}
					cout << endl;
				}
				system("CLS");
				p++;
				n -= 8;
				if (n == 33)
					n = 32;
			}
		}
		else
		{

			for (int j = 0; j < 25; j++)					// the final loops are for the disappearing of the 
			{												// words in the end (First 'O' , then 'L' and etc)
				cout << " ";			
				cout << endl;
			}
			for (int i = 0; i < 5; i++)
			{

				for (int m = 0; m < k; m++)
				{
					cout << "     ";
				}

				for (int j = 0; j < 41; j++)
				{
					cout << H[i][j];

				}
				cout << endl;

			}
			system("CLS");
			std::this_thread::sleep_for(std::chrono::nanoseconds(1));			// slowing the last loop
		
		}
	}
	
	
	int _;
	cin >> _;
	return 0;
}