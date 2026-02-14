#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Даны действительные числа s, t. Получить: f(2t,3s,5) + f(t,-t,s+t)

float f(float a, float b, float c) {
    return (2 * a + b + sin(c)) / (7.5 - c);
}

int main() {
    float s, t;
    cout << "Введите два числа: ";
    cin >> s >> t;
    
    float result = f(2*t, 3*s, 5) + f(t, -t, s+t);

    cout << endl << "Ответ: " << result;

    return 0;
}