#include <iostream>
using namespace std;

int fib_iter(int n) {
    int f1 = 0, f2 = 1, curr_fib;
    for(n; n > 1; n--) {
        curr_fib = f1 + f2;
        f1 = f2, f2 = curr_fib;
    }
    return f1;
}

int main() {
    int inp;
    cout << "Which Fibonacci number to print out: ";
    cin >> inp;
    cout << fib_iter(inp) << endl;
  return 0;
}
