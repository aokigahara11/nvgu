#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Дан двумерный массив. Поменять местами значения элементов столбца и строки на месте стыка
// минимального значения массива (или первого из минимальных).

int main() {
    int rows, cols;
    
    cout << "Введите количество строк и столбцов: ";
    cin >> rows >> cols;
    
    srand(time(NULL));
    int arr[rows][cols];
    
    cout << "\nИсходный массив:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    int min_i = 0, min_j = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < arr[min_i][min_j]) {
                min_i = i;
                min_j = j;
            }
        }
    }
    
    cout << "\nМинимальный элемент: arr[" << min_i << "][" << min_j << "] = " << arr[min_i][min_j] << "\n";
    
    int temp_row[cols];
    int temp_col[rows];
    
    for (int j = 0; j < cols; j++) {
        temp_row[j] = arr[min_i][j];
    }
    
    for (int i = 0; i < rows; i++) {
        temp_col[i] = arr[i][min_j];
    }
    
    for (int j = 0; j < cols; j++) {
        arr[min_i][j] = temp_col[j];
    }
    
    for (int i = 0; i < rows; i++) {
        arr[i][min_j] = temp_row[i];
    }
    
    cout << "\nМассив после замены:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}