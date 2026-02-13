#include <bits/stdc++.h>
using namespace std;

// последнюю и первую цифру числа (см. пример с нахождением суммы цифр числа). 

int main() {
    int number;
    cout << "Введите число (n < 9999): ";
    cin >> number;

    int lastDigit = number % 10;
    int firstDigit = number;
    
    while (firstDigit >= 10) {
        firstDigit = firstDigit / 10;
    }
    
    cout << endl << "Последняя цифра: " << lastDigit << endl;
    cout << "Первая цифра: " << firstDigit;
    
    return 0;
}