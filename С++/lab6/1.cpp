#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Выделить символы, заключённые в фигурные скобки.

int main() {
    string str;
    
    cout << "Введите строку, содержащую фигурные скобки {}: ";
    getline(cin, str);
    
    bool inside = false;
    string result = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '{') {
            inside = true;
            continue;
        }
        else if (str[i] == '}') {
            inside = false;
            continue;
        }
        
        if (inside) {
            result += str[i];
        }
    }
    
    cout << "Символы внутри скобок: " << result << endl;
        
    return 0;
}