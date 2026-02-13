#include <bits/stdc++.h>
using namespace std;

// Даны действительные числа a, b, c. Проверить выполняется ли неравенство c < b < a.

int main() {
    float a, b, c;
    cout << "Введите три действительных числа: " << endl;
    cin >> a >> b >> c;

    if (c < b && b < a) {
        cout << "Проверка: неравенство выполняется";
    } else {
        cout << "Проверка: неравенство не выполняется";
    }
    
    return 0;
}