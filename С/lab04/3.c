#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Дан двумерный числовой массив. Значения элементов главной диагонали возвести в квадрат.

int main() {
    int size;

    printf("Выберите размерность массива: ");
    scanf("%d", &size);
    
    srand(time(NULL));
    int list[size][size];
    
    // Генератор чисел в массиве
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            list[i][j] = rand() % 10 + 1;
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    // Цикл для возведения главной диагонали в квадрат
    for (int i = 0; i < size; i++) {
        list[i][i] = pow(list[i][i], 2);
    }
    
    printf("\nПосле возведения в квадрат:\n");
    for(int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}