#include <stdio.h>
#include <string.h>
#include <windows.h>

// Создать массив, элементами которого являются структуры – список детей детского сада (фамилия, группа, возраст, 
// месяц рождения). Вывести информацию по детям данного детского сада, которые родились в месяце, введенном 
// пользователем.

struct child {
    char surname[50];
    char group[50];
    int age;
    int birth_month;
};


int main() {
    int n;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("Введите количество детей: ");
    scanf("%d", &n);
    
    struct child f[n];
    
    int i = 0;
    
    while (i < n) {
        printf("\nРебенок %d:\n", i + 1);
        
        printf("Фамилия: ");
        scanf("%s", f[i].surname);
        
        printf("Группа: ");
        scanf("%s", f[i].group);
        
        printf("Возраст: ");
        scanf("%d", &f[i].age);
        
        printf("Месяц рождения (1-12): ");
        scanf("%d", &f[i].birth_month);
        
        i++;
    }
    
    int search_month;
    printf("\nВведите месяц рождения для поиска (1-12): ");
    scanf("%d", &search_month);
    
    printf("\nДети, родившиеся в %d месяце:\n", search_month);
    
    int found = 0;
    for (i = 0; i < n; i++) {
        if (f[i].birth_month == search_month) {
            printf("Фамилия: %s, Группа: %s, Возраст: %d\n", f[i].surname, f[i].group, f[i].age);
            found = 1;
        }
    }

    if (!found) {
        printf("Нет детей, родившихся в этом месяце.\n");
    }

    return 0;
}