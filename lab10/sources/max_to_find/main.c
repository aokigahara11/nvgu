#include <stdio.h>
#include "../../headers/max_to_find.h" 

int main() {
    int num1, num2, num3, num4;
    
    printf("Введите четыре целых числа: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int result = max_of_four(num1, num2, num3, num4);

    printf("Максимальное число: %d\n", result);

    return 0;
}