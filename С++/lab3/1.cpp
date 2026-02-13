#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Найти сумму квадратов чисел от m до n.

int main() {
    int m, n, sum = 0;
    cout << "Введите два числа для образования интервала (начало/конец): ";
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        int square = pow(i, 2);
        sum += square;
    }

    cout << endl << "Сумма квадратов равна: " << sum;
    return 0;
}