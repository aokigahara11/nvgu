#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Функция для умножения каждого числа в матрице
void mult_matrix_num(int size, int matrix[size][size], int mult_number) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] *= mult_number;
        }
    }
}

int main() {
    int mult_number;
    int size;

    printf("Введите размерность матрицы: ");
    scanf("%d", &size);

    printf("Введите число, на которое желаете умножить элементы матрицы: ");
    scanf("%d", &mult_number);

    srand(time(NULL));
    int matrix[size][size];
    
    // Генератор чисел в массиве
    printf("Исходная матрица:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 10 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    mult_matrix_num(size, matrix, mult_number);

    printf("\nМатрица после умножения на %d:\n", mult_number);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
