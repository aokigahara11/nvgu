#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Создать массив, элементами которого являются структуры – список спортсменов (фамилия, вид спорта, спортивное 
// общество). Вывести информацию по тем из них, кто занимается введенным пользователем видом спорта

struct sportsman {
    char surname[50];
    char sport[50];
    char society[50];
};

int main() {
    int n;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("Введите количество спортсменов: ");
    scanf("%d", &n);
    
    struct sportsman s[n];
    
    int i = 0;
    while (i < n) {
        printf("\nСпортсмен %d:\n", i + 1);
        
        printf("Введите фамилию: ");
        scanf("%s", s[i].surname);
        
        printf("Введите спорт: ");
        scanf("%s", s[i].sport);
        
        printf("Введите спортивное общество: ");
        scanf("%s", s[i].society);
        
        i++;
    }
    
    // Поиск 
    char search_sport[50];
    printf("\nВведите вид спорта для поиска: ");
    scanf("%s", search_sport);

    printf("\nСпортсмены, занимающиеся %s:\n", search_sport);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i].sport, search_sport) == 0) {
            printf("%s\n", s[i].surname);
            found = 1;
        }
    }

    if (!found) {
        printf("Нет спортсменов, занимающихся этим видом спорта.\n");
    }

    return 0;
}