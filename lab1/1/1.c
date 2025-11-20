#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Дан радиус окружности, подсчитать площадь круга. 

int main() {
    float radius, answer;
    printf("Введите радиус: ");
    scanf("%f", &radius);
    
    answer = M_PI * pow(radius, 2);
    
    printf("Площадь круга равна: %.2f", answer);
    return 0;

}