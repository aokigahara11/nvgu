#include <stdio.h>
#include <string.h>

// Создать массив, элементами которого являются структуры – список постояльцев отеля (фамилия, дата заезда, дата 
// выезда, номер апартаментов). Создать функцию, сортирующую данную структуру (например, по дате заезда), и 
// функцию для поиска нужного значения в структуре. Использовать эти функции по назначению в программе (для 
// вывода отсортированной информации и поиска нужной информации). 

struct guest {
    char surname[50];
    char check_in_date[11];  // формат ГГГГ-ММ-ДД
    char check_out_date[11]; // формат ГГГГ-ММ-ДД
    int apartment_number;
};

// Сортировка по номеру апартамента
void sort(struct guest g[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (g[j].apartment_number > g[j + 1].apartment_number) {
                struct guest temp = g[j];
                g[j] = g[j + 1];
                g[j + 1] = temp;
            }
        }
    }
}

void search(struct guest g[], int n) {
    char search_surname[50];
    printf("Введите фамилию для поиска: ");
    scanf("%s", search_surname);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(g[i].surname, search_surname) == 0) {
            printf("Найден: %s, заезд: %s, выезд: %s, апартаменты: %d\n", g[i].surname, g[i].check_in_date, g[i].check_out_date, g[i].apartment_number);
            found = 1;
        }
    }

    if (!found) {
        printf("Постоялец с фамилией %s не найден.\n", search_surname);
    }
}

int main() {
    int n;
    printf("Введите количество постояльцев: ");
    scanf("%d", &n);

    struct guest g[n];
    int i;

    while (i < n) {
        printf("\nПостоялец %d:\n", i + 1);

        printf("Фамилия: ");
        scanf("%s", g[i].surname);

        printf("Дата заезда (ГГГГ-ММ-ДД): ");
        scanf("%s", g[i].check_in_date);

        printf("Дата выезда (ГГГГ-ММ-ДД): ");
        scanf("%s", g[i].check_out_date);

        printf("Номер апартаментов: ");
        scanf("%d", &g[i].apartment_number);
        
        i++;
    }

    printf("\nСписок постояльцев:\n");
    for (i = 0; i < n; i++) {
        printf("%s, заезд: %s, выезд: %s, апартаменты: %d\n", g[i].surname, g[i].check_in_date, g[i].check_out_date, g[i].apartment_number);
    }

    char choice_sort;
    printf("\nХотите отсортировать по номеру апартаментов? (y/n): ");
    scanf(" %c", &choice_sort);

    if (choice_sort == 'y') {
        sort(g, n);
        printf("\nПосле сортировки:\n");
        for (i = 0; i < n; i++) {
            printf("%s, заезд: %s, выезд: %s, апартаменты: %d\n", g[i].surname, g[i].check_in_date, g[i].check_out_date, g[i].apartment_number);
        }
    }

    char choice_search;
    printf("\nХотите выполнить поиск по фамилии? (y/n): ");
    scanf(" %c", &choice_search);

    if (choice_search == 'y') {
        search(g, n);
    }

    printf("\nЗавершение работы программы.\n");
    return 0;
}