#include <iostream> 

long long power(int n, int p) {
	long long res = 1;
	for (int i = 0; i < p; i++) {
		res *= n;
	}
	if (n < 0 && p % 2 == 0) {
		res = -res;
	}
	return res;
}	

int main() {
	int n, p;
	std::cout << "Enter number: ";
	std::cin >> n;
	std::cout << "Enter power: ";
	std::cin >> p;
	std::cout << power(n, p) << std::endl;
}
