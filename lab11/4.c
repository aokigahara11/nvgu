#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Составить программу, которая переносит в конец непустого списка L его первый элемент.

typedef struct L {
    int value; 
    struct L* next;
} L;

int main() {
    L* start = NULL;
    L* end = NULL;
    L* new_node = NULL;
    int count = 0;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Сколько чисел добавить? ");
    scanf("%d", &count);
    
    if (count <= 0) {
        printf("Список должен быть непустым\n");
        return 1;
    }
    
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

    printf("Исходный список: ");
    L* current = start;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    if (start != NULL && start->next != NULL) {
        L* first = start;
        start = start->next;
        first->next = NULL;
        end->next = first;
        end = first;
        
        printf("Первый элемент перенесен в конец\n");
    }

    printf("Список после переноса: ");
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