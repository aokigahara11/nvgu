#include <stdio.h>
#include "glasn.h"

int main() {
    char symbol;
    
    printf("Введите букву на кириллице: ");
    scanf("%c", &symbol);

    int result = glasn(symbol);

    if (result == 1) {
        printf("Буква '%c' - гласная.\n", symbol);
    } else {
        printf("Буква '%c' - согласная.\n", symbol);
    }

    return 0;
}