#include <iostream>

bool compare(int a, int b) {
	return a > b;
}

void switch_demo(int a, int b) {
       switch (compare(a, b)) {
	       case true:
		       std::cout << "a is bigger than b" << std::endl;
		       break;
	       case false:
		       std::cout << "a is not bigger than b" << std::endl;
		       break;
       }
}


int main() {
	int a, b;
	std::cin >> a >> b;
	switch_demo(a, b);
}

