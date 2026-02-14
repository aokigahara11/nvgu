#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Напишите функцию возведения в степень по формуле: aⁿ = Exp(Ln(a) * n)

float exponentiation(float a, float n) {
    return exp(log(a) * n);
}

int main() {
    float a, n;
    cout << "Введите сначала число, потом степень для возведения: ";
    cin >> a >> n;

    cout << endl << "Ответ: " << exponentiation(a, n) << endl;
    
    return 0;
}