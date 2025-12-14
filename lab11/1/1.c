#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Сформировать список строк из текстового файла.

typedef struct node {
    char line[256];
    struct node* next;
} node;

int main() {
    FILE *file;
    char file_path[256];
    char buffer[256];
    node* start = NULL;
    node* end = NULL;
    node* new_node = NULL;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("Введите путь к файлу: ");
    scanf("%s", file_path);

    file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        buffer[strcspn(buffer, "\n")] = 0;
        
        new_node = (node*)malloc(sizeof(node));
        strcpy(new_node->line, buffer);
        new_node->next = NULL;
        
        if (start == NULL) {
            start = new_node;
            end = new_node;
        } else {
            end->next = new_node;
            end = new_node;
        }
    }

    fclose(file);

    printf("Содержимое файла:\n");
    node* current = start;
    while (current != NULL) {
        printf("%s\n", current->line);
        current = current->next;
    }

    current = start;
    while (current != NULL) {
        node* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}