#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

// Дан текстовый файл. Удалить из него все лишние пробелы, оставив между словами не более одного пробела. Результат 
// поместить в новый файл.

int main() {
    FILE *f, *new_f;
    int current;
    int previous = ' ';

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    f = fopen("C/lab08/2/text.txt", "r");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }

    new_f = fopen("C/lab08/2/text_n.txt", "w");
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