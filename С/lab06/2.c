#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Дана строка. Определить, больше в строке букв или цифр.

int main() {
    char str[100];
    int letters = 0, digits = 0;
    
    printf("Введите строку: ");
    gets(str);
    
    int i = 0;
    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        }
        i++;
    }
    
    printf("\nКоличество букв в строке: %d\n", letters);
    printf("Количество цифр в строке: %d\n", digits);
    
    if (letters > digits) {
        printf("Следовательно, букв больше.");
    } else if (letters < digits) {
        printf("Следовательно, цифр больше.");
    } else {
        printf("Следовательно, количество букв и цифр одинаково.");
    }
    
    return 0;
}