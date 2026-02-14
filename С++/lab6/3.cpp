#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// найти количество слов, начинающихся с буквы "с".  

int main() {
    string str;
    
    cout << "Введите строку: ";
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    int count = 0;
    
    while (ss >> word) {
        if (word[0] == 'c') {
            count++;
        }
    }
    
    cout << "Количество слов, начинающихся с буквы 'с': " << count << endl;
    
    return 0;
}