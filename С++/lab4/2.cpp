#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Даны действительные числа a, b, c.

int found_max(float a, float b) { 
    if (a > b) {
        return a;                       
    } else {
        return b;      
    }
}

float solution_example(float a, float b, float c) {
    float number = 3.25;
    float answer = (found_max(a, a * b) + found_max(c, b/c)) / (8 + found_max(c + b * a, number));  // добавил ;
    return answer;
}

int main() {
    float a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    cout << endl << "Ответ: " << solution_example(a, b, c); 

    return 0;
}