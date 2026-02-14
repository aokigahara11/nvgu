#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Вычислить сумму и число положительных элементов матрицы A[N, N], находящихся над главной диагональю.

int main() {
    int size;
    
    cout << "Выберите размерность массива: ";
    cin >> size;
    
    srand(time(0));
    int list[size][size];
    
    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            list[i][j] = rand() % 21 - 10;
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    
    int sum = 0;
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (list[i][j] > 0) {
                sum += list[i][j];
                count++;
            }
        }
    }
    
    cout << "\nСумма положительных элементов над главной диагональю: " << sum << endl;
    cout << "Количество положительных элементов над главной диагональю: " << count;
    
    return 0;
}