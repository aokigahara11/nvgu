#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Написать функцию, умножающую все элементы массива на число. Параметрами функции является массив и число, на 
// которое нужно умножить его элементы. 

// Функция для умножения каждого числа в матрице
void mult_matrix_num(int matrix[3][3], int mult_number) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] *= mult_number;
        }
    }
}

int main() {
    int mult_number;
    printf("Введите число, на которое желаете умножить элементы матрицы: ");
    scanf("%d", &mult_number);

    srand(time(NULL));
    int matrix[3][3];
    
    // Генератор чисел в массиве
    printf("Исходная матрица:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 10 + 1;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    mult_matrix_num(matrix, mult_number);

    printf("\nМатрица после умножения на %d:\n", mult_number);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
