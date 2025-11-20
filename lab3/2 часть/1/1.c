#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Написать программу, выясняющую кол-во нечетных цифр во введенном пользователем числе.

int main() {
    int number;
    printf("Введите положительное число: ");
    scanf("%d", &number);

    int save_number = number;
    int count = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            count++;
        }
        number = number / 10;
    }

    printf("В числе %d содержиться %d нечетных цифр.\n", save_number, count);
    
    return 0;
}