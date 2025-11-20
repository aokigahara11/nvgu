#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Дана сторона равностороннего треугольника. Найти площадь этого треугольника.

int main() {
    float side, answer;
    printf("Введите величину стороны: ");
    scanf("%f", &side);
    
    answer = (sqrt(3) / 4) * pow(side, 2);
    
    printf("Площадь равностороннего треугольника равна: %.2f", answer);
    return 0;
}