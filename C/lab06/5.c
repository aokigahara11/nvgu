#include <stdio.h>
#include <string.h>

// Дана строка. Найти в ней повторяющиеся слова. 

int main() {
    char str[100];
    char *words[100];
    
    int count_words = 0;
    int count = 0;

    printf("Введите строку: ");
    gets(str);

    char *word = strtok(str, " ");
    while (word != NULL) {
        words[count_words] = word;
        count_words++;
        word = strtok(NULL, " ");
    }

    // Считаем повторяющиеся слова
    for (int i = 0; i < count_words; i++) {
        for (int j = i + 1; j < count_words; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count++;
                break;
            }
        }
    }

    printf("\nКоличество повторяющихся слов: %d\n", count);
    return 0;
}