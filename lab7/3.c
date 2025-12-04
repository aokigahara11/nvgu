#include <stdio.h>
#include <string.h>
#include <windows.h>

// Создать массив, элементами которого являются структуры – список факультетов НГГУ (название, фамилия декана, 
// число студентов). Создать функцию, сортирующую данную структуру (например, по числу студентов), и функцию 
// для изменения нужного значения в структуре. Использовать эти функции по назначению в программе (для вывода 
// отсортированной информации и изменения нужной информации). 

struct faculty {
    char name[100];
    char dean[100];
    int students_count;
};

// Сортировка по количеству студентов (по убыванию)
void sort(struct faculty f[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (f[j].students_count < f[j + 1].students_count) {
                struct faculty temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
            }
        }
    }
}

// Изменение данных одного факультета
void replace(struct faculty f[], int n) {
    int index;
    printf("Введите номер факультета для изменения (от 1 до %d): ", n);
    scanf("%d", &index);
    index--;

    if (index >= 0 && index < n) {
        int choice;
        printf("Что изменить?\n");
        printf("1 - Название\n");
        printf("2 - Фамилию декана\n");
        printf("3 - Количество студентов\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Новое название: ");
            scanf("%s", f[index].name);
        } else if (choice == 2) {
            printf("Новая фамилия декана: ");
            scanf("%s", f[index].dean);
        } else if (choice == 3) {
            printf("Новое количество студентов: ");
            scanf("%d", &f[index].students_count);
        } else {
            printf("Неверный выбор!\n");
            return;
        }
        printf("Данные обновлены!\n");
    } else {
        printf("Неверный номер факультета!\n");
    }
}

int main() {
    int n;
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("Введите количество факультетов: ");
    scanf("%d", &n);

    struct faculty f[n];
    int i;
    

    for (i = 0; i < n; i++) {
        printf("\n==== Факультет %d ====\n", i + 1);
        printf("Название: ");
        scanf("%s", f[i].name);
        printf("Фамилия декана: ");
        scanf("%s", f[i].dean);
        printf("Количество студентов: ");
        scanf("%d", &f[i].students_count);
    }

    printf("\nФакультеты:\n");
    for (i = 0; i < n; i++) {
        printf("Факультет %d: %s, декан: %s, студентов: %d\n",
               i + 1, f[i].name, f[i].dean, f[i].students_count);
    }

    char choice_sort;
    printf("\nХотите отсортировать факультеты по числу студентов? (y/n): ");
    scanf(" %c", &choice_sort);

    if (choice_sort == 'y') {
        sort(f, n);
        printf("\nПосле сортировки:\n");
        for (i = 0; i < n; i++) {
            printf("Факультет %d: %s, декан: %s, студентов: %d\n",
                   i + 1, f[i].name, f[i].dean, f[i].students_count);
        }
    }

    char choice_replace;
    printf("\nХотите изменить данные какого-либо факультета? (y/n): ");
    scanf(" %c", &choice_replace);

    if (choice_replace == 'y') {
        replace(f, n);
        printf("\nОбновлённый список:\n");
        for (i = 0; i < n; i++) {
            printf("Факультет %d: %s, декан: %s, студентов: %d\n",
                   i + 1, f[i].name, f[i].dean, f[i].students_count);
        }
    }

    printf("\nЗавершение работы программы.\n");
    return 0;
}