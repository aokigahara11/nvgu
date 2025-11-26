#include <stdio.h>
#include <string.h>

// Написать программу, которая удаляет из введенной с клавиатуры строки конечные пробелы. 

int main() {
    char str[100];
    
    printf("Введите строку с пробелами на конце (до 99 символов): ");
    gets(str);
    
    int i = strlen(str) - 1;
    while (i >= 0 && str[i] == ' ') {
        i--;
    }
    str[i + 1] = '\0';
    
    printf("Строка без конечных пробелов: \"%s\"\n", str);
    
    return 0;
}