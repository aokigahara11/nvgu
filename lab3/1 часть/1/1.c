#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Найти сумму квадратов нечётных чисел в интервале, заданном значениями переменных m и n.

int main() {
    int m, n;
    printf("Введите два числа, для образования интервала (начало/конец): ");
    scanf("%d %d", &m, &n);

    int sum = 0;

    for (int i = m + 1; i < n; i++) {
        if (i % 2 != 0) {
            int square = pow(i, 2);
            sum += square;
        }
    }

    printf("Сумма квадратов нечетных чисел в интервале от %d до %d равна %d:", m, n, sum);

    return 0;
}
