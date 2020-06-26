#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream infile("text.txt");
	ofstream outfile("text_copy.txt");
	string out, tmp;
	while(getline(infile, tmp)) {
		out += tmp + "\n";
		outfile << tmp << endl;
	}
	cout << out;
	return 0;
}

