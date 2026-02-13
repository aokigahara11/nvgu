#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Даны три действительные числа. Возвести в квадрат те из них, значения которых не отрицательны.

int main() {
    float a, b, c;
    cout << "Введите три действительных числа: " << endl;
    cin >> a >> b >> c;

    if (a >= 0) {
        a = pow(a, 2);
    }
    
    if (b >= 0) {
        b = pow(b, 2);
    }
    
    if (c >= 0) {
        c = pow(c, 2);
    }

    cout << "Результат: " << a << ", " << b << ", " << c << ".";

    return 0;
}