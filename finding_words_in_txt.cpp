#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout << "Слово для поиска: ";
    string word_to_find;
    cin >> word_to_find;
    if (word_to_find == "") {
	    cout << "Нечего искать. Завершаемся." << endl;
	    return 1;
    }
    
    ifstream infile("finding_words_in_txt.cpp");
    string word;
    int result = 0;
    int total_words = 0;
    while (infile >> word) {
	    if (word == word_to_find) {
		    result++;
	    }
	    total_words++;
    }

    cout << "Число искомых слов в файле: \t" << result << endl;
    cout << "Всего слов в файле: \t" << total_words << endl;      
    return 0;
}
