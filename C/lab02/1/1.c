#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Даны действительные числа a, b, c. Проверить выполняется ли неравенство c < b < a. 

int main() {
    float a, b, c;
    printf("Введите три числа: ");
    scanf("%f %f %f", &a, &b, &c);
    
    // Условие 
    if (c < b && b < a) {
        printf("Неравенство c < b < a — выполняется.");
    } else {
        printf("Неравенство c < b < a — не выполняется.");
    }
    
    return 0;
}