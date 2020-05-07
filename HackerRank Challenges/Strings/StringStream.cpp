//  github.com/DaniAngelov

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> vec;
    

    stringstream ss(str);

    for(int i = 0;i < str.length();i++)
    {
    char sym;
    int temp;
    int number;
    ss >> number >> sym ; 
    if(temp != number) 
        vec.push_back(number) ;
        temp = number;
   
    }
    
    return vec;
};

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
