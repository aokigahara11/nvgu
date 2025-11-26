#include "max_to_find.h"

// Функция для определения максимального числа из двух
int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Функция для определения максимального числа из четырех
int max_of_four(int a, int b, int c, int d) {
    int max_two_first_numbers = max_of_two(a, b);
    int max_two_second_numbers = max_of_two(c, d);
    return max_of_two(max_two_first_numbers, max_two_second_numbers);
}