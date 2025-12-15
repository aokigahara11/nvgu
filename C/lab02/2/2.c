#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// Даны действительные числа a, b, c. Выяснить, имеет ли уравнение ax2+bx+c=0 действительные корни. Если 
// действительные корни имеются, то найти их. В противном случае ответом должно служить сообщение, что 
// действительных корней нет.  

int main() {
    float a, b, c;
    printf("Введите три числа: ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminate = pow(b,2) - 4 * a * c;

    if (discriminate < 0) {
        printf("Действительный корней нет.");
    } else {
        float x1 = (-b + sqrt(discriminate)) / (2 * a);
        float x2 = (-b - sqrt(discriminate)) / (2 * a);

        printf("Первый корень: %.2f\nВторой корень: %.2f", x1, x2);

    }
    
    return 0;
}