#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Напишите программу поиска максимального из четырех чисел с использованием функции поиска большего из двух.

// Функция для определения максимального числа из двух
int max_of_two(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Функция для определение максимального числа из четырех
int max_of_four(int a, int b, int c, int d) {
    int max_two_first_numbers = max_of_two(a,b);
    int max_two_second_numbers = max_of_two(c,d);
    return max_of_two(max_two_first_numbers, max_two_second_numbers);
}

int main() {
    int num, num1, num2, num3;
    printf("Введите четыре целых числа: ");
    scanf("%d %d %d %d", &num, &num1, &num2, &num3);

    int result = max_of_four(num, num1, num2, num3);

    printf("Максимальное число: %d\n", result);

    return 0;
}

