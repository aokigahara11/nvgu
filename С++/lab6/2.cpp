#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Дана строка, содержащая английский текст. Найти количество слов, начинающихся с буквы b.

int main() {
    string str;
    int count = 0;
    
    cout << "Введите строку: ";
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    
    while (ss >> word) {
        if (word[0] == 'b') {
            count++;
        }
    }
    
    cout << "Количество слов, начинающихся с буквы 'b': " << count << endl;
    
    return 0;
}