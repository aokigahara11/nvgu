#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Дан радиус окружности, подсчитать площадь круга. 

int main() {
    float radius, answer;
    
    cout << "Введите радиус: " << endl;
    cin >> radius;
    
    answer = M_PI * pow(radius, 2);
    cout << "Площадь круга равна: " << answer;
    
    return 0;
}