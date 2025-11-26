#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Записать в файл N действительных чисел. Вычислить произведение четных компонентов файла и сумму нечетных, и 
// вывести полученные значения в другой файл. 

int main() {
    char file_path[256], new_file_path[256];
    FILE *f, *new_f;
    int quantity = 0;
    long long even = 1;
    int odd = 0;
    int current;
    
    printf("Введите полный путь к файлу: ");
    scanf("%s", file_path);

    printf("Введите количество действительных чисел: ");
    scanf("%d", &quantity);

    int list[quantity];

    srand(time(NULL));
    for (int i = 0; i < quantity; i++) {
        list[i] = rand() % 100 + 1;
    }

    f = fopen(file_path, "w+");
    if (f == NULL) {
        printf("Ошибка! Не удалось открыть файл.");
        return 1;
    }

    // Заполянем числами текстовый файл
    for (int i = 0; i < quantity; i++) {
        fprintf(f, "%d ", list[i]);
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

    // Читаем числа из файла и вычисляем
    for (int i = 0; i < quantity; i++) {
        fscanf(f, "%d", &current);
        
        if (current % 2 == 0) {
            even = even * current;
        } else {
            odd = odd + current;
        }
    }

    fprintf(new_f, "Произведение четных чисел: %lld\n", even);
    fprintf(new_f, "Сумма нечетных чисел: %d\n", odd);

    printf("Произведение четных чисел: %lld\n", even);
    printf("Сумма нечетных чисел: %d\n", odd);
    printf("Результаты записаны в файл: %s\n", new_file_path);

    fclose(f);
    fclose(new_f);

    return 0;
}