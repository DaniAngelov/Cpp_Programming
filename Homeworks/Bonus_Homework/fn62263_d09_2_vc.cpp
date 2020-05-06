/**
*
* Solution to homework task 09
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* 2018/2019 academic year
*
* @author Jordan Angelov
* @idnumber 62263
* @task 2
* @compiler VC
*
*/

#include <iostream>
using namespace std;
#include <string>


struct Date
{
	int day;
	int month;
	int year;
};


const int DaysInAMonth[12] = { 31, 28, 31, 30,
31, 30, 31, 31, 30, 31, 30, 31 };

//function that counts the leap years
int LeapYears(Date date)
{
	int LeapYears = date.year;

	//Check if it is a leap year
	if (date.month <= 2)
		LeapYears--;

	// variable that stores the value
	int count =  (LeapYears / 4) - (LeapYears / 100) + (LeapYears / 400);
	return count;
}


int DifferenceBetweenTwoDates(Date date1, Date date2)
{
 
	// counting the days for the first date
	long int days1 = date1.year * 365 + date2.day;
	for (int i = 0; i < date1.month - 1; i++)
		days1 += DaysInAMonth[i];
	days1 += LeapYears(date1);

	// counting the days for the second date
	long int days2 = date2.year * 365 + date2.day;
	for (int i = 0; i < date2.month - 1; i++)
		days2 += DaysInAMonth[i];
	days2 += LeapYears(date2);

	
	return (days2 - days1);
}


int main()
{
	Date date1 = { 1, 1, 0001 };
	Date date2;
	cout << "Enter date (DD.MM.YYYY) :" << endl;

	cin >> date2.day; 
	if (cin.get() != '.')
	{
		cout << "Wrong entry !" << endl;
		return 1;
	}
	cin >> date2.month; 
	if (cin.get() != '.')
	{
		cout << "Wrong entry !" << endl;
		return 1;
	}
	cin >> date2.year;

	cout << "Difference between 01.01.0001 and the entered date is: " << DifferenceBetweenTwoDates(date1, date2) << " days" << endl;

	system("pause");
	cin.get();
	return 0;
}

	

