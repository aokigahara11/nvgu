#include "headers.h"

// Функция для проверки символа на гласную/согласную букву
int glasn(char symbol) {
    char vowels[6] = {'a', 'e', 'y', 'u', 'o', 'j'};

    for (int i = 0; i < 6; i++) {
        if (symbol == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

// Функция для умножения каждого числа в массиве
void mult_matrix_num(int size, int mas[], int mult_number) {
    for (int i = 0; i < size; i++) {
        mas[i] *= mult_number;
    }
}

// Функция для определения максимального числа из двух
int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}