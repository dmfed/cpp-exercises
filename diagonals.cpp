#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {            
            cout << abs(i-j) << "\t";
        }
        cout << endl; 
    }
  return 0;
}
