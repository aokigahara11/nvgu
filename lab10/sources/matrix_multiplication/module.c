#include "matrix_multiplication.h"

// Функция для умножения каждого числа в матрице
void mult_matrix_num(int size, int matrix[size][size], int mult_number) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] *= mult_number;
        }
    }
}