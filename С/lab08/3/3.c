#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Записать в файл N действительных чисел. Вычислить произведение четных компонентов файла и сумму нечетных, и 
// вывести полученные значения в другой файл. 

int main() {
    char file_path[256], new_file_path[256];
    FILE *f, *new_f;
    int quantity = 0;
    double even = 1.0;
    double odd = 0.0;
    double current;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("Введите полный путь к файлу: ");
    scanf("%s", file_path);

    printf("Введите количество действительных чисел: ");
    scanf("%d", &quantity);

    float list[quantity];

    srand(time(NULL));
    for (int i = 0; i < quantity; i++) {
        list[i] = (float)(rand() % 10000) / 100.0f;
    }

    f = fopen(file_path, "w+");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }

    for (int i = 0; i < quantity; i++) {
        fprintf(f, "%f ", list[i]);
    }

    rewind(f);

    printf("Введите путь для создания нового файла: ");
    scanf("%s", new_file_path);

    new_f = fopen(new_file_path, "w");
    if (new_f == NULL) {
        printf("Ошибка! Не удалось создать новый файл.");
        fclose(f);
        return 1;
    }

    for (int i = 0; i < quantity; i++) {
        fscanf(f, "%lf", &current);
        
        int int_part = (int)current;
        if (int_part % 2 == 0) {
            even = even * current;
        } else {
            odd = odd + current;
        }
    }

    fprintf(new_f, "Произведение четных чисел: %.2lf\n", even);
    fprintf(new_f, "Сумма нечетных чисел: %.2lf\n", odd);

    printf("Произведение четных чисел: %.2lf\n", even);
    printf("Сумма нечетных чисел: %.2lf\n", odd);
    printf("Результаты записаны в файл: %s\n", new_file_path);

    fclose(f);
    fclose(new_f);

    return 0;
}