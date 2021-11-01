#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
       	std::cin >> c;
	std::cout << ((a % 2 != 0) && (b % 2 != 0) && (c %2 != 0));
}
