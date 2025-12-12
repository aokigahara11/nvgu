#include <stdio.h>
#include <stdlib.h>
#include "headers.h"
#include <time.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char symbol;
    printf("Первая программа: ");
    
    printf("\nВведите букву: ");
    scanf("%c", &symbol);

    int result1 = glasn(symbol);

    if (result1 == 1) {
        printf("Буква '%c' - гласная.\n", symbol);
    } else {
        printf("Буква '%c' - согласная.\n", symbol);
    }

    printf("\nВторая программа: ");

    int mult_number;
    printf("\nВведите число, на которое желаете умножить элементы массива: ");
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
    
    printf("\nТретья программа: ");

    int num1, num2, num3, num4;
    
    printf("\nВведите четыре целых числа: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int result = max_of_two(max_of_two(max_of_two(num1, num2), num3), num4);

    printf("Максимальное число: %d\n", result);

    printf("\nНажмите клавишу для завершения...");
    while (getchar() != '\n');
    getchar();

    return 0;
}
