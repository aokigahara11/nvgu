#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// Написать программу, которая выводит таблицу квадратов первых n целых положительных чисел. 

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int square = pow(i, 2);
        cout << square << endl;
    }

    return 0;
}