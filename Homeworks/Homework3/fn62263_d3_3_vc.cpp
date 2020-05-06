/**
*
* Solution to homework assignment 3
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
const int k = 4;	// use it for the double array



void swap(int arr[][4], int row1, int row2,
	int col)
{
	for (int i = 0; i < col; i++)
	{
		int temp = arr[row1][i];
		arr[row1][i] = arr[row2][i];
		arr[row2][i] = temp;
	}
}				// function for swapping the values of the elements of the arrays



void FindingRank(int n, int m, int  arr[][k], int arr1[][4])
{

	int rank = 4 ;
	for (int row = 0; row < rank; row++)
	{
		// checking if diagonal element is not zero 

		if (arr[row][row] != 0)
		{
			for (int col = 0; col < k ; col++)
			{
				if (col != row)
				{
					double mult = arr[col][row] /
						arr[row][row];
					for (int i = 0; i < rank; i++)
						arr[col][i] -= mult * arr[row][i];
				}
			}
		}

		// there are either elements that are 0 and non-zero elements on the column
		// or there is a 0 element and all elements on the column are 0
		else
		{
			bool zero = true;

			// finding non-zero elements in the other rows
			for (int i = row + 1; i < k ; i++)
			{
				//swaping it with this row

				if (arr[i][row] != 0)
				{
					swap(arr, row, i, rank);
					zero = false;
					break;
				}
			}

			// If we did not find any row with non-zero 
			// element in current columnm, then all 
			// values in this column are 0. 
			if (zero == true)
			{
				rank--;							 // decreasing rank  
				for (int i = 0; i < k ; i++)
					arr[i][row] = arr[i][rank];
			}
			row--;
		}
	}
	
	rank = n;
	for (int i = 0; i < rank; i++)					// loop for printing the vectors
	{
		for (int j = 0; j < 4; j++)
		{
			cout << " " << arr[i][j];
		}
		cout << endl;
	}
	

}


int main()
{
	const int n = 4;
	const int m = 2;
	int a[n][4] =
	{
	{2,8,-3,14},
	{-1,2,3,5},
	{-1,14,6,29},
	{0,12,3,24}
	};
	int b[m][4] =
	{
	{0,1,1,0},
	{10,7,0,-8}
	};
	

	FindingRank(m ,n,b,a);
	FindingRank(n,m, a, b);
	
	
	
	int _;
	cin >> _;
	return 0;
}