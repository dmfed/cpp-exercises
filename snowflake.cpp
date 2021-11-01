#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            if (i == j or i + j == s-1 or i == s / 2 or j == s / 2) {
                cout << "* ";
            } else {
                cout << ". ";
            }            
        }
        cout << endl; 
    }
  return 0;
}
