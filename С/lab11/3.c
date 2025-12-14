#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Составить программу, которая вставляет в список L новый элемент F 
// перед первым вхождением элемента Е, если Е входит в L.

typedef struct L {
    int value; 
    struct L* next;
} L;

int main() {
    L* start = NULL;
    L* end = NULL;
    L* new_node = NULL;
    int count = 0;
    int element_E;
    int element_F;
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Сколько чисел добавить? ");
    scanf("%d", &count);
    
    printf("Введите %d чисел:\n", count);
    for (int i = 0; i < count; i++) {
        int number;
        printf("Число %d: ", i + 1);
        scanf("%d", &number);
        
        new_node = (L*)malloc(sizeof(L));
        new_node->value = number;
        new_node->next = NULL;
        
        if (start == NULL) {
            start = new_node;
            end = new_node;
        } else {
            end->next = new_node;
            end = new_node;
        }
    }

    printf("Список: ");
    L* current = start;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    printf("Введите элемент E (перед которым вставляем): ");
    scanf("%d", &element_E);
    printf("Введите элемент F (который вставляем): ");
    scanf("%d", &element_F);

    L* prev = NULL;
    current = start;
    int found = 0;
    
    while (current != NULL) {
        if (current->value == element_E) {
            found = 1;
            break;
        }
        prev = current;
        current = current->next;
    }

    if (found) {
        new_node = (L*)malloc(sizeof(L));
        new_node->value = element_F;
        
        if (prev == NULL) {
            new_node->next = start;
            start = new_node;
        } else {
            new_node->next = current;
            prev->next = new_node;
        }
        
        printf("Элемент вставлен\n");
    } else {
        printf("Элемент E не найден\n");
    }

    printf("Список после вставки: ");
    current = start;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    current = start;
    while (current != NULL) {
        L* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}