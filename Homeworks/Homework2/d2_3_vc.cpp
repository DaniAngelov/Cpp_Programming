/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Jordan Angelov
* @idnumber 62263
* @task 3
* @compiler VC
*
*/


#include <iostream>
using namespace std;

int Matrix(int arr[][6], int M)							// parameters - pointer to the 1st element of the matrix and integer M
{
	int count = 0;									// count - shows the times M shows in the matrix
	int M1 = M / 10;									
	int M2 = M / 100;								// variables used for the loops for substituting M
	int M3 = M / 1000;
	int M4 = M / 10000;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)					// loop for the searching of M from the left to the right and backwards
													// 6 cases - for 1,2,3,4,5 and 6 digits

					// case for 6 digits
		{
			if (((M / 100000) == arr[i][j] || (M4 % 10) == arr[i][j] || (M3 % 10) == arr[i][j] || (M2 % 10) == arr[i][j] ||
				(M1 % 10) == arr[i][j] || (M % 10) == arr[i][j]) && M > 99999 && M < 1000000)
			{
				if (((M4 % 10) == arr[i][j + 1] || (M3 % 10) == arr[i][j + 1] || (M2 % 10) == arr[i][j + 1] ||(M1 % 10) == arr[i][j + 1] 
					|| (M % 10) == arr[i][j + 1] || (M / 100000) == arr[i][j + 1]) || ((M / 100000) == arr[i][j + 1]))
				{
					if (((M3 % 10) == arr[i][j + 2] || (M2 % 10) == arr[i][j + 2] || (M1 % 10) == arr[i][j + 2] ||
						(M % 10) == arr[i][j + 2]) || (M / 100000) == arr[i][j + 2] || (M4 % 10) == arr[i][j + 2])
					{
						if ((M2 % 10) == arr[i][j + 3] || (M1 % 10) == arr[i][j + 3] || (M % 10) == arr[i][j + 3] 
							|| ((M / 100000) == arr[i][j + 3])||(M4 % 10) == arr[i][j + 3] || (M3 % 10) == arr[i][j + 3])
						{
							if (((M1 % 10) == arr[i][j + 4] || (M % 10) == arr[i][j + 4] || (M / 100000) == arr[i][j + 4] 
								|| (M4 % 10) == arr[i][j + 4] ||(M3 % 10) == arr[i][j + 4] || (M2 % 10) == arr[i][j + 4]))
							{
								if (((M % 10) == arr[i][j + 5] || ((M / 100000) == arr[i][j + 5]) || (M4 % 10) == arr[i][j + 5] 
									|| (M3 % 10) == arr[i][j + 5] || (M2 % 10) == arr[i][j + 5]) || (M1 % 10) == arr[i][j + 5])
									count++;
							}
						}
					}
				}
			}

						// case for 5 digits
			if (((M / 10000) == arr[i][j] || (M3 % 10) == arr[i][j] ||(M2 % 10) == arr[i][j] || (M1 % 10) == arr[i][j] 
				|| (M % 10) == arr[i][j]) && M > 9999 && M < 100000)
			{
				if (((M3 % 10) == arr[i][j + 1] || (M2 % 10) == arr[i][j + 1] || (M1 % 10) == arr[i][j + 1] 
					|| (M % 10) == arr[i][j + 1]) || (M / 10000) == arr[i][j + 1] )
				{
					if ((M2 % 10) == arr[i][j + 2] || (M1 % 10) == arr[i][j + 2] || (M % 10) == arr[i][j + 2] 
						|| ((M / 10000) == arr[i][j + 2]) || (M3 % 10) == arr[i][j + 2])
					{
						if (((M1 % 10) == arr[i][j + 3] || (M % 10) == arr[i][j + 3] || (M / 10000) == arr[i][j + 3] 
							|| (M3 % 10) == arr[i][j + 3] || (M2 % 10) == arr[i][j + 3]))
						{
							if (((M % 10) == arr[i][j + 4] || ((M / 10000) == arr[i][j + 4]) || (M3 % 10) == arr[i][j+4] 
								|| (M2 % 10) == arr[i][j + 4]) || (M1 % 10) == arr[i][j + 4])
								count++;
						}
					}
				}
			}
						
					// case for 4 digits
			if (((M / 1000) == arr[i][j] || (M2 % 10) == arr[i][j] || (M1 % 10) == arr[i][j] 
				|| (M % 10) == arr[i][j]) && M > 999 && M < 10000)
			{
				if ((M2 % 10) == arr[i][j + 1] || (M1 % 10) == arr[i][j + 1] || (M % 10) == arr[i][j + 1] 
					|| ((M / 1000) == arr[i][j + 1]) )
				{
					if (( (M1 % 10) == arr[i][j + 2] || (M % 10) == arr[i][j + 2] || (M / 1000) == arr[i][j + 2] 
						|| (M2 % 10) == arr[i][j + 2]))
					{
						if (((M % 10) == arr[i][j + 3] || ((M / 1000) == arr[i][j + 3]) ||  (M2 % 10) == arr[i][j + 3]) 
							|| (M1 % 10) == arr[i][j + 3])
							count++;
					}
				}
			}

					// case for 3 digits
			if (((M / 100) == arr[i][j] || (M1 % 10) == arr[i][j] || (M % 100) == arr[i][j]) && M > 99 && M < 1000)
			{
				if ((M1 % 10) == arr[i][j + 1] || ((M / 100) == arr[i][j + 1] || (M % 100) == arr[i][j + 1]))
				{
					if ((M % 100) == arr[i][j + 2] || (M1 % 10) == arr[i][j + 2] || (M / 100) == arr[i][j + 2])
						count++;
				}
			}
					// case for 2 digits
			if (((M / 10) == arr[i][j] || (M % 10) == arr[i][j]) && M > 9 && M < 100)
			{
				if (M % 10 == arr[i][j + 1] || M / 10 == arr[i][j + 1])
					count++;
			}
					// case for 1 digit
			if (M <= 9 && M >= 0 && M == arr[i][j])
				count++;
		}
	}
	
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)								// Loop for the searching of M from upwards to downwards (again 6 cases)
		{
					// case for 6 digits
			if (((M / 100000) == arr[j][i] || (M4 % 10) == arr[j][i] || (M3 % 10) == arr[j][i] || (M2 % 10) == arr[j][i] ||
				(M1 % 10) == arr[j][i] || (M % 10) == arr[j][i]) && M > 99999 && M < 1000000)
			{
				if (((M4 % 10) == arr[j][i + 1] || (M3 % 10) == arr[j][i + 1] || (M2 % 10) == arr[j][i + 1] || (M1 % 10) == arr[j][i + 1] ||
					(M % 10) == arr[j][i + 1] || (M / 100000) == arr[j][i + 1]) || ((M / 100000) == arr[j][i + 1]))
				{
					if (((M3 % 10) == arr[j][i + 2] || (M2 % 10) == arr[j][i + 2] || (M1 % 10) == arr[j][i + 2] || (M % 10) == arr[j][i + 2]) ||
						(M / 100000) == arr[j][i + 2] || (M4 % 10) == arr[j ][i + 2])
					{
						if ((M2 % 10) == arr[j][i + 3] || (M1 % 10) == arr[j][i + 3] || (M % 10) == arr[j][i + 3] || ((M / 100000) == arr[j][i + 3]) ||
							(M4 % 10) == arr[j][i + 3] || (M3 % 10) == arr[j][i + 3])
						{
							if (((M1 % 10) == arr[j][i + 4] || (M % 10) == arr[j][i + 4] || (M / 100000) == arr[j][i + 4] || (M4 % 10) == arr[j][i + 4] ||
								(M3 % 10) == arr[j][i + 4] || (M2 % 10) == arr[j][i + 4]))
							{
								if (((M % 10) == arr[j][i + 5] || ((M / 100000) == arr[j][i + 5]) || (M4 % 10) == arr[j][i + 5] || (M3 % 10) == arr[j][i + 5] ||
									(M2 % 10) == arr[j][i + 5]) || (M1 % 10) == arr[j][i + 5])
									count++;
							}
						}
					}
				}
			}
							// case for 5 digits
			if (((M / 10000) == arr[j][i] || (M3 % 10) == arr[j][i] || (M2 % 10) == arr[j][i] || (M1 % 10) == arr[j][i] 
				|| (M % 10) == arr[j][i]) && M > 9999 && M < 100000)
			{
				if (((M3 % 10) == arr[j][i + 1] || (M2 % 10) == arr[j][i+ 1] || (M1 % 10) == arr[j][i + 1] 
					|| (M % 10) == arr[j][i + 1]) || (M / 10000) == arr[j][i + 1])
				{
					if ((M2 % 10) == arr[j][i + 2] || (M1 % 10) == arr[j][i + 2] || (M % 10) == arr[j][i + 2] 
						|| ((M / 10000) == arr[j][i + 2]) || (M3 % 10) == arr[j][i + 2])
					{
						if (((M1 % 10) == arr[j][i + 3] || (M % 10) == arr[j][i + 3] || (M / 10000) == arr[j][i + 3] 
							|| (M3 % 10) == arr[j][i + 3] || (M2 % 10) == arr[j][i + 3]))
						{
							if (((M % 10) == arr[j][i + 4] || ((M / 10000) == arr[j][i + 4]) || (M3 % 10) == arr[j][i + 4] 
								|| (M2 % 10) == arr[j][i + 4]) || (M1 % 10) == arr[j][i + 4])
								count++;
						}
					}
				}
			}
							// case for 4 digits
					
			if (((M / 1000) == arr[j][i] || (M2 % 10) == arr[j][i] || (M1 % 10) == arr[j][i] || (M % 10) == arr[j][i]) && M > 999 && M < 10000)
			{
				if ((M2 % 10) == arr[j][i + 1] || (M1 % 10) == arr[j][i + 1] || (M % 10) == arr[j][i + 1] || ((M / 1000) == arr[j][i + 1]))
				{
					if (((M1 % 10) == arr[j][i + 2] || (M % 10) == arr[j][i + 2] || (M / 1000) == arr[j][i + 2] || (M2 % 10) == arr[j][i + 2]))
					{
						if (((M % 10) == arr[j][i + 3] || ((M / 1000) == arr[j][i + 3]) || (M2 % 10) == arr[j][i + 3]) || (M1 % 10) == arr[j][i + 3])
							count++;
					}
				}
			}
							// case for 3 digits

			if (((M / 100) == arr[j][i] || (M1 % 10) == arr[j][i] || (M % 100) == arr[j][i]) && M > 99 && M < 1000)
			{
				if ((M1 % 10) == arr[j][i + 1] || ((M / 100) == arr[j][i + 1] || (M % 100) == arr[j][i + 1]))
				{
					if ((M % 100) == arr[j][i + 2] || (M1 % 10) == arr[j][i + 2] || (M / 100) == arr[j][i + 2])
						count++;
				}
			}
							// case for 2 digits

			if (((M / 10) == arr[j][i] || (M % 10) == arr[j][i]) && M > 9 && M < 100)
			{
				if (M % 10 == arr[j][i + 1] || M / 10 == arr[j][i + 1])
					count++;
			}
							// case for 1 digit
							
			if (M <= 9 && M >= 0 && M == arr[j][i])
				count++;
		}
	}
	if (M > 999)
		count /= 2;
	cout << " " << count << endl;
		return count;
	

}

	int main()
	{

		int arr[6][6]=											// the matrix
		{ {5,4,3,8,0,6},
		{9,4,5,1,0,2},
		{8,5,8,0,6,1},
		{0,9,6,8,4,2},
		{6,1,0,2,6,1},
		{2,1,8,4,2,6} };
		int width = 6;
		int height = 6;
		for (int i = 0; i < height; ++i)							// Loop for printing the array on the screen 
		{
			for (int j = 0; j < width; ++j)
			{
				cout << arr[i][j] << ' ' ;
			}
			cout << endl;
		}
			
		int M;														// number M which the user enters
		cout << "Enter number M: " << endl;
		cin >> M;
		if (cin.fail())
		{
			while (cin.fail())										// Checking that the entered value is not a symbol
			{

				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cout << "Enter a number not a symbol :" << endl;
				cin >> M;
			}
		}
	
		Matrix(arr,M );												// using the function to find the number of times M shows in 
																	// the matrix
		
		int _;
		cin >> _;
		return 0;
	} 