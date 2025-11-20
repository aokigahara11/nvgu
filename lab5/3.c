#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//  Написать функцию glasn, которая возвращает 1, если символ, полученный функцией в качестве аргумента, является 
// гласной буквой русского алфавита, и ноль — в противном случае. 

// Функция для проверки символа на гласную/согласную букву
int glasn(char symbol) {
    char vowels[20] = {'а', 'е', 'ё', 'и', 'о', 'у', 'ы', 'э', 'ю', 'я', 'А', 'Е', 'Ё', 'И', 'О', 'У', 'Ы', 'Э', 'Ю', 'Я'};

    for (int i = 0; i < 20; i++) {
        if (symbol == vowels[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char a;
    printf("Введите букву на кириллице: ");
    scanf("%c", &a);

    int result = glasn(a);

    if (result == 1) {
        printf("Буква '%c' - гласная.\n", a);
    } else {
        printf("Буква '%c' - согласная.\n", a);
    }

    return 0;
}