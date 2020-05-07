//  github.com/DaniAngelov

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int N;
    cin >> N;
    int Q;
    cin >> Q;
   int** groupArr = new int* [N];

    int number;


   for(int i = 0;i < N;i++)
   {
        cin >> number;

       if(number > 0)
         groupArr[i] = new int[number];

       for(int j = 0;j < number;j++)
       {
           int number2;
           cin >> number2;
             groupArr[i][j] = number2; 
       }

   }  
   int i = 0;

for(int i = 0;i < Q;i++)
{
    int ArrNum;
    cin >> ArrNum;
    int searched;
    cin >> searched;

            cout << groupArr[ArrNum][searched] << endl;

}

    return 0;
}
