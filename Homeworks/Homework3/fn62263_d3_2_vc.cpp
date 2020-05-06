/**
*
* Solution to homework assignment 3
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2018/2019
*
* @author Jordan Angelov
* @idnumber 62263
* @task 2
* @compiler VC
*
*/

#include <iostream>
using namespace std;

int f;						// constants we use in the loop of the determinant for finding it
int m;
float det = 0;				// determinant for the inverse matrix
int D[3][3];				// Matrix that takes the value of (-3)*At*C
int A1[3][3];				// matrix that takes the value of A + 5E
int n = 0;					// constant that takes the value of At*C temporary
int z;						// temporary variable which we use in the loops for searching the determinant
int A2[3][3];				// inverse matrix of A1
int X[3][3];				// the X matrix we need

void Matrix(int A[][3], int C[][3])
{
	

	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				n += A[k][j] * C[j][i];

			}
			D[k][i] = -3 * n;
			n = 0;

		}
	}

	// (-3)*At*C = D
	// X = (-3)*At*C * (A+5E)^(-1)
	for (int i = 0; i < 3; i++)
	{
		A[i][i] += 5;
		for (int j = 0; j < 3; j++)
		{
			A1[i][j] = A[i][j];
		}

	}													// loop for A+5E = A1



	for (f = 0; f < 3; f++)				// finding the determinant
		det = det + (A1[0][f] * (A1[1][(f + 1) % 3] * A1[2][(f + 2) % 3] - A1[1][(f + 2) % 3] * A1[2][(f + 1) % 3]));

	for (f = 0; f < 3; f++)				// using the determinant in the loop for finding the inverse matrix by the formula 
	{									// A^(-1) = 1 / det A * adjoint of matrix A
		for (m = 0; m < 3; m++)
		{
			z = ((A1[(m + 1) % 3][(f + 1) % 3] * A1[(m + 2) % 3][(f + 2) % 3])
				- (A1[(m + 1) % 3][(f + 2) % 3] * A1[(m + 2) % 3][(f + 1) % 3])) / det;
			A2[f][m] = z;
		}
	}
	// loops for finding the inverse of A1 - A2
	n = 0;
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				n += D[k][j] * A2[j][i];

			}
			X[k][i] = n;
			n = 0;
		}
	}
	
}

int main()
{
	int A[3][3]=		// declaring the Matrices A and C
	{
	{-4,1,1},
	{1,-3,2},
	{1,2,-4}
	};
	int C[3][3] =
	{ 
	{-1,-2,-2},
	{-1,-3,-4},
	{-1,-3,-5}
	};
	Matrix(A, C);		// Calling the function

	for (int i = 0; i < 3; i++)		// loop for printing the array X
	{
		for (int j = 0; j < 3; j++)
		{
			cout << " " << X[i][j];
		}
		cout << endl;
	}
	

	int _;
	cin >> _;
	return 0;
}