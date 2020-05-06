/**‌ ‌
*‌
*‌ ‌Solution‌ ‌to‌ ‌homework‌ ‌task‌ ‌09‌ ‌
*‌ ‌Introduction‌ ‌to‌ ‌programming‌ ‌course‌ ‌
*‌ ‌Faculty‌ ‌of‌ ‌Mathematics‌ ‌and‌ ‌Informatics‌ ‌of‌ ‌Sofia‌ ‌University‌ ‌
*‌ ‌2018/2019‌ ‌academic‌ ‌year‌ ‌
*‌ ‌
*‌ ‌@author‌ ‌Jordan Angelov‌ ‌
*‌ ‌@idnumber‌ 62263‌
*‌ ‌@task‌ ‌1
*‌ ‌@compiler‌ ‌VC
*‌ ‌
*/

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 10000;
	int N;
	int arraySize;
	int arr[MAX];

	cout << "Enter number :" << endl;
	cin >> N;

	while (abs(N) <= 65000)
	{

		if (abs(N) > 0 && abs(N) < 10)
		{
			arraySize = 1;
		}
		else if (abs(N) > 9 && abs(N) < 100)
		{
			arraySize = 2;
		}
		else if (abs(N) > 99 && abs(N) < 1000)
		{
			arraySize = 3;
		}
		else if (abs(N) > 999 && abs(N) < 10000)
		{
			arraySize = 4;
		}
		else if (abs(N) > 9999 && abs(N) < 65000)
		{
			arraySize = 5;
		}

		int k = 1;
		for (int i = 0; i <= arraySize; i++)
		{

			arr[i] = (N / k) % 10;
			k *= 10;
		}

		cout << "The elements of the array are:" << endl;

		for (int i = 0; i < arraySize; i++)
		{

			cout << arr[i] << endl;
		}

		cout << "Enter number:" << endl;
		cin >> N;

	}


	cin.get();
	return 0;
}