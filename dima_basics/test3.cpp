#include <iostream>
using namespace std;


int main() {
	int n, a, b, tmp;
	cin >> n >> a >> b;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (tmp > a && tmp % b == 0) {
			sum += tmp;
		}
	}
	cout << sum << endl;
}
