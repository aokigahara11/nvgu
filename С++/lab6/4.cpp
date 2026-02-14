#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// найти длину самого длинного слова.  

int main() {
    string str;
    
    cout << "Введите строку: ";
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    int max_len = 0;
    
    while (ss >> word) {
        if (word.length() > max_len) {
            max_len = word.length();
        }
    }
    
    cout << "Длина самого длинного слова: " << max_len << endl;
    
    return 0;
}