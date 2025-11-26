#include <stdio.h>
#include <string.h>

// Дана строка, слова разделены пробелами. Вывести на экран слова в обратном порядке.

int main() {
    char str[100];
    char *words[100];
    int count = 0;

    printf("Введите строку: ");
    gets(str);

    char *word = strtok(str, " ");
    while (word != NULL) {
        words[count] = word;
        count++;
        word = strtok(NULL, " ");
    }

    printf("Слова в обратном порядке: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    return 0;
}