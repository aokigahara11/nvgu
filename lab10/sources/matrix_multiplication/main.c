#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../../headers/matrix_multiplication.h"

int main() {
    int mult_number;
    printf("Введите число, на которое желаете умножить элементы массива: ");
    scanf("%d", &mult_number);

    srand(time(NULL));

    int size = rand() % 10 + 1;
    printf("Размер массива: %d\n", size);
    
    int mas[size];
    
    // Генерация чисел в массиве
    printf("Исходный массив:\n");
    for (int i = 0; i < size; i++) {
        mas[i] = rand() % 10 + 1;
        printf("%d ", mas[i]);
    }
    printf("\n");

    mult_matrix_num(size, mas, mult_number);

    printf("\nМассив после умножения на %d:\n", mult_number);
    for (int i = 0; i < size; i++) {
        printf("%d ", mas[i]);
    }
    printf("\n");

    return 0;
}