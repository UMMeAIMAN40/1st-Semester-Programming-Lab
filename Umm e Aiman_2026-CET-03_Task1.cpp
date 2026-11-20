#include<iostream>
using namespace std;
int main()
{
	int a, b;
	
	cout << "Enter first number: ";
	cin >> a;
	
	cout << "Enter second number: ";
	cin >> b;
	
	cout << "Remainder = " << a % b << endl;
	cout << "Average = " << (a+b) / 2.0 << endl;
	cout << "Square of first number = " << a * a << endl;
	cout << "Square of second number = " << b * b << endl;
	
	return 0;
}
