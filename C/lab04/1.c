#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Случайным образом генерируется массив чисел. Пользователь вводит числа a и b. 
// Заменить элемент массива на сумму его соседей, если элемент массива четный 
// и номер его лежит в промежутке от a до b.

int main() {
    int a, b;
    printf("Введите два числа для создания промежутка: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Первое число должно быть меньше второго!");
        return 1;
    }

    srand(time(NULL));

    int size = rand() % 20 + 10;

    // Создаем массив
    int list[size];

    printf("Исходный массив:\n");
    for (int i = 0; i < size; i++) {
        list[i] = rand() % 100;
        printf("%d ", list[i]);
    }
    printf("\n");
    
    int flag = 0; // Флаг
    
    for (int i = 0; i < size; i++) {
        if (i >= a && i <= b && list[i] % 2 == 0) {
            if (i > 0 && i < size - 1) {
                list[i] = list[i-1] + list[i+1];
                flag = 1;
            }
        }
    }
    
    // Выводим результат
    if (!flag) {
        printf("Изменений не было\n");
    } else {
        printf("Массив после изменений:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", list[i]);
        }
        printf("\n");
    }
    
    return 0;
}
