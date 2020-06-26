#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("/home/dmitry/Reading/alice_in_wonderland.txt");
    cout << "Слово для поиска: ";
    string word_to_find;
    cin >> word_to_find;
    string word;
    int result = 0;
    int total_words = 0;
    while(infile >> word) {
        if(word == word_to_find) {
            result++;
        }
        total_words++;
    }
    cout << "Число слов в файле: " << result << endl;
    cout << "Всего слов в файле: " << total_words << endl;      
}
