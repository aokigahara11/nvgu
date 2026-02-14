#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;
    
    int arr[n];
    srand(time(0));
    
    cout << "Массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int maxOdd = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] > maxOdd) {
            maxOdd = arr[i];
        }
    }
    
    if (maxOdd == -1) {
        cout << "В массиве нет нечетных чисел";
    } else {
        cout << "Наибольшее нечетное число: " << maxOdd;
    }
    
    return 0;   
}