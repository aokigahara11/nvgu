#include "../../headers/matrix_multiplication.h"

// Функция для умножения каждого числа в массиве
void mult_matrix_num(int size, int mas[], int mult_number) {
    for (int i = 0; i < size; i++) {
        mas[i] *= mult_number;
    }
}