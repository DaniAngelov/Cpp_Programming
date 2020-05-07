//  github.com/DaniAngelov

#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string a,b;

    getline(cin,a);
    getline(cin,b);

    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    string temp = a;
    a[0] = b[0];
    b[0] = temp[0];
    cout << a << " " << b << endl;
  int _;
  cin >> _;
    return 0;
}
