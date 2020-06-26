#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<string> mycontainer;
    string filename;
    cout << "Filename to print out:";
    cin >> filename;
    ifstream infile(filename);
    string line;
    while(getline(infile, line))
        mycontainer.push_back(line);
    for (int i = 0; i < mycontainer.size(); i++)
        cout <<  i << " | " << mycontainer[i] << endl;
    cout << "There are " << mycontainer.size() 
    << " lines in this file." << endl;
}
