#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// Дан массив из n чисел. Вычислить произведение элементов в массиве до первого отрицательного.

int main() {
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    
    int arr[n];
    srand(time(0));
    
    cout << "Массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 201 - 100;
        cout << arr[i] << " ";
    }
    cout << endl;

    long long mult = 1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            break;
        }
        mult *= arr[i];
    }

    cout << endl << "Произведение элементов равно: " << mult << endl;
}