#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Дан двумерный числовой массив. Значения элементов главной диагонали возвести в квадрат.

int main() {
    srand(time(NULL));
    int list[3][3]; // Выбрал двумерный за основу массив 3x3
    
    // Генератор чисел в массиве
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            list[i][j] = rand() % 10 + 1;
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    // Цикл для возведения главной диагонали в квадрат
    for (int i = 0; i < 3; i++) {
        list[i][i] = pow(list[i][i], 2);
    }
    
    printf("\nПосле возведения в квадрат:\n");
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}