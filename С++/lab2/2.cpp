#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Даны действительные числа a, b, c. Выяснить, имеет ли уравнение ax²+bx+c=0 действительные 
// корни. Если действительные корни имеются, то найти их. В противном случае ответом должно 
// служить сообщение, что действительных корней нет.

int main() {
    float a, b, c;
    cout << "Введите три действительных числа: " << endl;
    cin >> a >> b >> c;
    
    float discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant < 0) {
        cout << "Действительных корней нет.";
    } else if (discriminant == 0) {
        float x = -b / (2 * a);
        cout << "Уравнение имеет один корень: " << x;
    } else {
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Первый корень: " << x1 << endl << "Второй корень: " << x2;
    }
    
    return 0;
}