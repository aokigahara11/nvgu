#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Написать функцию, которая удаляет из списка все вхождения элемента, который вводит пользователь.

typedef struct node {
    int value;
    struct node* next;
} node;

void remove_all_occurrences(node** start, int value_to_remove) {
    node* current = *start;
    node* prev = NULL;
    
    while (current != NULL) {
        if (current->value == value_to_remove) {
            if (prev == NULL) {
                *start = current->next;
                free(current);
                current = *start;
            } else {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        } else {
            prev = current;
            current = current->next;
        }
    }
}

int main() {
    node* start = NULL;
    node* end = NULL;
    node* new_node = NULL;
    int count = 0;
    int value_to_remove;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("Сколько чисел добавить? ");
    scanf("%d", &count);
    
    printf("Введите %d чисел:\n", count);
    for (int i = 0; i < count; i++) {
        int number;
        printf("Число %d: ", i + 1);
        scanf("%d", &number);
        
        new_node = (node*)malloc(sizeof(node));
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
    node* current = start;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    printf("Введите число для удаления: ");
    scanf("%d", &value_to_remove);
    
    remove_all_occurrences(&start, value_to_remove);

    printf("Список после удаления: ");
    current = start;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");

    current = start;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}