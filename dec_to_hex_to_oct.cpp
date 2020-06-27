#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Input number: ";
	cin >> number;
	cout << "Value of number in hex = 0x"
	<< hex << number << endl;
	cout << "Value in octal = 0"
	<< oct << number << endl;
	return 0;
}

