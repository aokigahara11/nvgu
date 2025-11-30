#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Написать функцию, умножающую все элементы массива на число. Параметрами функции является массив и число, на 
// которое нужно умножить его элементы.

// Функция для умножения каждого числа в матрице
void mult_matrix_num(int matrix[size][size], int mult_number) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] *= mult_number;
        }
    }
}

