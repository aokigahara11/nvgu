#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Дан файл, содержащий произвольный текст. Выяснить, чего в нем больше: букв или цифр.

int main() {
    char file_path[256];
    FILE *f;
    int numbers = 0, letters = 0;
    int ch;
    
    printf("Введите полный путь к файлу: ");
    scanf("%s", file_path);
    
    f = fopen(file_path, "r");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }
    
    while ((ch = fgetc(f)) != EOF) {
        if (isdigit(ch)) {
            numbers++;
        } else if (isalpha(ch)) {
            letters++;
        }
    }
    
    fclose(f);
    
    printf("Количество цифр: %d\n", numbers);
    printf("Количество букв: %d\n", letters);
    
    if (numbers > letters) {
        printf("В файле цифр больше.");
    } else if (numbers < letters) {
        printf("В файле букв больше."); 
    } else {
        printf("Буквы и цифры между собой равны.");
    }
    
    return 0;
}