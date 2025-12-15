#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа, расположенные между A и B (не 
// включая числа A и B), а также количество N этих чисел.

int main() {
    int a, b;
    printf("Введите два числа (A < B): \n");
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("Ошибка: не выполнено условие A < B\n");
        return 1;
    }
    
    int count = 0;
        
    for (int i = b - 1; i > a; i--) {
        printf("%d ", i);
        count++;
    }
    
    printf("\nКоличество чисел: %d", count);
    
    return 0;
}