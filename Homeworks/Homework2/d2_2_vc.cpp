/**
*
* Solution to homework assignment 2
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
#include <string>
using namespace std;

int countSubstring(const string& str, const string& sub)			//function for calculating the length 
{
	
	if (sub.length() == 0) return 0;					
	int count = 0;													// count - counter variable for the number
	for (char offset = str.find(sub); offset != string::npos;		// of found substrings in the string
		offset = str.find(sub, offset + sub.length()))
	{
		++count;

	}

	return count*sub.length();
}

int initialIndex(const string& str, const string& sub)				// function for calculating the position of the index
{
	return str.find(sub);
}

int main()
{
	string B;
	cout << " Enter characters for B: " << endl;
	getline(cin, B);
	string C;
	cout << " Enter characters for C: " << endl;
	getline(cin, C);
	string K = C ;													// string that consists of the repeated substring C
	string T;														// String that holds the value of K later
	for (int i = 0 ; i <= B.length(); i++)
	{
		K += C;
		if (B.find(K) != std::string::npos)							// Checking if the K exists
			T = K;

	}
	C = T;															
	
	cout << " Index: " << initialIndex(B, C) << endl;
	cout << " Length: " << countSubstring(B, C) << endl;

	int _;
	cin >> _;
	return 0;
}