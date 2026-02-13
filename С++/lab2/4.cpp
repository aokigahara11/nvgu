#include <bits/stdc++.h>
using namespace std;

// Определить, является ли целое число чётным.

int main() {
    int number;
    cout << "Введите одно число: " << endl;
    cin >> number;

    if (number % 2 == 0) {
        cout << "Число " << number << " чётное";
    } else {
        cout << "Число " << number << " нечётное";
    }

    return 0;
}