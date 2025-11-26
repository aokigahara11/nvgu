#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Заполнить файл случайными действительными числами. Найти сумму минимального и максимального элементов этого 
// файла и вывести их в другой файл. 

int main() {
    char file_path[256], new_file_path[256];
    FILE *f, *new_f;
    float sum, min, max;
    int quantity;

    printf("Введите полный путь к файлу: ");
    scanf("%s", file_path);

    printf("Введите путь для создания нового файла: ");
    scanf("%s", new_file_path);

    f = fopen(file_path, "w");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }

    srand(time(NULL));

    quantity = rand() % 100 + 1;

    float list[quantity];

    for (int i = 0; i < quantity; i++) {
        list[i] = (float)(rand() % 10000) / 100.0f;
        fprintf(f, "%.2f ", list[i]);
    }
    fclose(f);

    min = list[0];
    max = list[0];

    for (int i = 1; i < quantity; i++) {
        if (list[i] < min) {
            min = list[i];
        }
        if (list[i] > max) {
            max = list[i];
        }
    }

    sum = min + max;

    new_f = fopen(new_file_path, "w");
    if (new_f == NULL) {
        printf("Ошибка! Не удалось создать файл результатов.");
        return 1;
    }

    fprintf(new_f, "Минимальное число: %.2f\n", min);
    fprintf(new_f, "Максимальное число: %.2f\n", max);
    fprintf(new_f, "Сумма минимального и максимального: %.2f", sum);

    printf("Минимальное число: %.2f\n", min);
    printf("Максимальное число: %.2f\n", max);
    printf("Сумма минимального и максимального: %.2f\n", sum);
    printf("Результат сохраненен в файл: %s", new_file_path);

    fclose(new_f);

    return 0;
}