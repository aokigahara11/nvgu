#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Составить программу, которая выводит на экран таблицу умножения от 1 до 9 в десятичной системе счисления. 

int main() {
    
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    
    return 0;
}