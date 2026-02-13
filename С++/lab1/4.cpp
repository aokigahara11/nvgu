#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Найти среднегеометрическое 2-х чисел

int main() {
    float a,b;
    float answer;
    cout << "Введите два числа: " << endl;
    cin >> a >> b;
    
    answer = 2 * sqrt(a * b);
    
    cout << "Среднегеометрическое из двух чисел:" << answer;
    
    return 0;
}