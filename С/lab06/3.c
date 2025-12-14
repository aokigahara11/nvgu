#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Дана строка. Определить, сколько слов начинается с введенной пользователем буквы. 

int main() {
    char str[100], target_symbol;
    int count = 0;
    
    printf("Введите строку: ");
    gets(str);
    
    printf("Введите букву: ");
    scanf("%c", &target_symbol);
    
    char *word = strtok(str, " \n");
    while (word != NULL) {
        if (tolower(word[0]) == tolower(target_symbol)) {
            count++;
        }
        word = strtok(NULL, " \n");
    }
        
    printf("Количество слов, начинающих с буквы '%c': %d\n", target_symbol, count);
    
    return 0;
}