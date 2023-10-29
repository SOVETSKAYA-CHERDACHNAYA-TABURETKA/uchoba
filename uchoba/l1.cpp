#include <iostream>
#include <string>
using namespace std;
void main(){
	int a;
	int b;
	int f;
	cout << "insert number under letter a " << endl;
	cin >> a;
	cout << "insert number under letter b " << endl;
	cin >> b;
	cout << "insert number under letter f " << endl;
	cin >> f;
	cout << "the following formul will be used: (a+b-f/a)+f*a*a-(a+b) " << endl;
	cout << (a + b - f / a) + f * a * a - (a + b) << endl;
};