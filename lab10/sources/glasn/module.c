#include "../../headers/glasn.h"

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