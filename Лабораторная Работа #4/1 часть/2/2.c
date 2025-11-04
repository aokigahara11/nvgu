#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Задана последовательность из N чисел. Определить, сколько среди них чисел меньших К, равных К и больших К.

int main() {
    int n, k;
    printf("Введите размерность массива: ");
    scanf("%d", &n);
    printf("Введите число: ");
    scanf("%d", &k);
    
    srand(time(NULL));
    int list[n];
    
    printf("Массив: ");
    for (int i = 0; i < n; i++) {
        list[i] = rand() % 100;
        printf("%d ", list[i]);
    }
    printf("\n");
    
    int less = 0, equal = 0, more = 0;
    
    for (int i = 0; i < n; i++) {
        if (list[i] < k) {
            less++;
        } else if (list[i] == k) {
            equal++;
        } else {
            more++;
        }
    }
    
    printf("Чисел меньше %d: %d\n", k, less);
    printf("Чисел равных %d: %d\n", k, equal);
    printf("Чисел больше %d: %d\n", k, more);
    
    return 0;
}