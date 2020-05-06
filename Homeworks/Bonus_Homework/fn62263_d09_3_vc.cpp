/**‌ ‌
*‌ ‌ ‌
*‌ ‌Solution‌ ‌to‌ ‌homework‌ ‌task‌ ‌09‌ ‌
*‌ ‌Introduction‌ ‌to‌ ‌programming‌ ‌course‌ ‌
*‌ ‌Faculty‌ ‌of‌ ‌Mathematics‌ ‌and‌ ‌Informatics‌ ‌of‌ ‌Sofia‌ ‌University‌ ‌
*‌ ‌2018/2019‌ ‌academic‌ ‌year‌ ‌
*‌ ‌
*‌ ‌@author‌ ‌Jordan Angelov‌ ‌
*‌ ‌@idnumber‌ 62263‌
*‌ ‌@task‌ ‌3
*‌ ‌@compiler‌ ‌VC
*‌ ‌
*/

#include <iostream>

using namespace std;



// function that calculates the number of words in the string 
int WordCount(char* words)
{
	bool temp = true;
	int WordCount = 0;   
	
	while (*words)
	{
		
		if (*words == '\t' || *words == ' ' || *words == '\n')
			temp = true;
  
		else if (temp == true)
		{
			temp = false;
			WordCount++;
		}
		words++;
	}

	return WordCount;
}

int main()
{
	char words[] = " a b c";
	cout << "No of words : " << WordCount(words) << endl;

	system("pause");
	cin.get();
	return 0;
}