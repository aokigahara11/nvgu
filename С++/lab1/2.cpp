#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Вычислить объём шара радиуса R.

int main() {
    float radius, answer;
    
    cout << "Введите радиус: " << endl;
    cin >> radius;
    
    answer = 4/3 * M_PI * pow(radius, 3);
    cout << "Обьем шара равен:" << answer;
    
    return 0;
}