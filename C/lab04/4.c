#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//  Заданы матрица порядка n и число k. Вычесть из элементов k-го 
// столбца диагональный элемент, расположенный в этом столбце.

int main() {
    int n, k;
    printf("Введите порядок матрицы: ");
    scanf("%d", &n);
    printf("Введите номер столбца (от 1 до %d): ", n);
    scanf("%d", &k);
    
    k = k - 1;
    
    srand(time(NULL));
    int list[n][n];

    printf("Исходная матрица:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            list[i][j] = rand() % 10 + 1;
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }

    int diagonal_element = list[k][k];
    printf("\nДиагональный элемент в столбце %d: %d\n", k + 1, diagonal_element);

    for (int i = 0; i < n; i++) {
        list[i][k] -= diagonal_element;
    }

    printf("\nМатрица после преобразования:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
    
