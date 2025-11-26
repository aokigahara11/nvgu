#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Дан текстовый файл. Удалить из него все лишние пробелы, оставив между словами не более одного пробела. Результат 
// поместить в новый файл.

int main() {
    char file_path[256];
    char new_file_path[256];
    FILE *f, *new_f;
    int current;
    int previous = ' ';

    printf("Введите полный путь к файлу: ");
    scanf("%s", file_path);

    f = fopen(file_path, "r");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }

    printf("Введите путь для создания нового файла: ");
    scanf("%s", new_file_path);

    new_f = fopen(new_file_path, "w");
    if (new_f == NULL) {
        printf("Ошибка! Не удалось создать новый файл.");
        return 1;
    }

    while ((current = fgetc(f)) != EOF) {
        if (current == ' ') {
            if (previous != ' ') {
                fputc(' ', new_f);
            }
        }
        else {
            fputc(current, new_f);
        }

        previous = current;
    }

    fclose(f);
    fclose(new_f);
    
    printf("Файл успешно обработан!\n");

    return 0;
}