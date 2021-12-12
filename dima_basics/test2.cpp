#include <iostream>
using namespace std;


int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int sum1 = 0, sum2 = 0;
	while (a <= b) {
		sum1 += a;
		a++;
	}
	while (c <= d) {
		sum2 += c;
		c++;
	}
	cout << sum1 - sum2;
	return 0;
}
