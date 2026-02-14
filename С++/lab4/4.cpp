#include <bits/stdc++.h>
using namespace std;

// Создайте программу для подсчета числа нечетных цифр, используемых в записи введенного числа M.

int main() {
    int M;
    cout << "Введите число M: ";
    cin >> M;

    int temp = M;
    int count = 0;

    while (temp > 0) {
        int digit = temp % 10; 
        
        if (digit % 2 != 0) {
            count++;
        }
        
        temp = temp / 10;
    }
    
    cout << "Количество нечетных цифр в числе " << M << ": " << count << endl;
    
    return 0;
}