/**
*
* Solution to homework assignment 2
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
#include <cmath>
using namespace std;




const int MAXIMUM_VALUE = 99;
int arr[MAXIMUM_VALUE];
int M;


void leftRotatebyOne(int arr[], int Length)					//Function rotating to the left by 1
{
	int temp = arr[0], i;									// temp - temporary variable 
	for (i = 0; i < Length - 1; i++)
		arr[i] = arr[i + 1];

	arr[i] = temp;
}

void rightRotatebyOne(int arr[], int Length)				//Function rotating to the right by 1
{
	int temp = arr[Length - 1], i;							// temp - temporary variable 				
	for (i = Length - 1;i > 0;i--)
		arr[i] = arr[i - 1];

	arr[i] = temp;
}

void Rotation(int arr[], int M, int Length)
{
	if (M > 0)												// The 2 cases of M and the rotations
	{
		for (int i = 0; i < M; i++)
			rightRotatebyOne(arr, Length);
	}
	if (M < 0)
	{
		for (int i = 0; i < -(M); i++)
			leftRotatebyOne(arr, Length);
	}
}

void printArray(int arr[], int Length)						// Function for printing the elements of the array
{
	for (int i = 0; i < Length; i++)
		cout << arr[i] << " ";
}


int main()
{

	int Length = 5;
	int arr[5] = { 6,5,6,0,3 };

	cout << "Enter number M (which absolute value is less than 100" << endl;
	cin >> M;

	while (cin.fail())										// Checking that the entered value is not a symbol
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Enter a number not a symbol :" << endl;
		cin >> M;
	}
		while (abs(M) > Length)								// Checking if the number is valid
		{
			
			cout << "Enter a valid number M" << endl;
			cin >> M;
		}
		
		Rotation(arr, M, Length);
		printArray(arr, Length);

		int _;
		cin >> _;
		return 0;
	}









