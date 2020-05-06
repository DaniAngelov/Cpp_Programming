#include "Store.h"
#include "Product.h"
#include <iostream>
using namespace std;

int main()
{
	char a = 'f';			//variable for the number entered
	Store s;
	
	while (1 == 1)
	{
		

		cout << "Press A to add item:" << endl;
		cout << "Press X to dellete item:" << endl;
		cout << "Press C to change prroduct:" << endl;
		cout << "Press D to display products: " << endl;
		cout << "Press Q to quit:" << endl;

		
		cin >> a;				
		system("CLS");
		if (a == 'A' || a == 'a')
		{
			system("CLS");

			cout << "Enter car SKU " << endl;
			cout << "Enter car brand " << endl;
			cout << "Enter car model " << endl;
			cout << "Enter car price " << endl;
			cout << "Enter car count " << endl;

			Product p;			// variable for added product

			cin >> p;

			s.addProduct(p);
		}

		else if (a == 'X' || a == 'x')
		{
			system("CLS");
			
			int index = 0;
			cout << "Enter the number of the item you want to delete: " << endl;
			cin >> index;		// variable for the index of the product that we want to delete
			s.removeProduct(index);
		}

		else if (a == 'C' || a == 'c')
		{
			system("CLS");


			int index = 0;

			cout << "Enter car SKU " << endl;
			cout << "Enter car brand " << endl;
			cout << "Enter car model " << endl;
			cout << "Enter car price " << endl;
			cout << "Enter car count " << endl;

			Product p2;
			cin >> p2;				// variable for the new  product

			cout << "Enter index of the item you want to delete ";
			cin >> index;			

			s.changeProduct(index, p2);

		}

		else if (a == 'D' || a == 'd')
		{
			s.printStore();
		}
		else if (a == 'Q' || a == 'q')
		{
			break;
		}
		else
		{
			
			cout << "Wrong input ! Please enter a correct symbol ! ";
		}

	}
	
	cin.get();
	
	return 0;
}