#include <iostream>
#include <vector>
using namespace std;

int printout(vector<float> numbers) {
    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << "\n";
    }
    cout << endl;
    return 0;
}

int main() {
    vector<float> container1;
    for(int i = 1; i <= 10; i++) {
        container1.push_back(i);
    }
    printout(container1);
    for(int i = 0; i < container1.size(); i++) {
        container1[i] = container1[i] * container1[i];
    }
    printout(container1);
}
