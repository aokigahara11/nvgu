#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

// По ребру найти площадь грани, площадь боковой поверхности и объём куба.

int main() {
    float edge, square_facets, square_side_surface, volume_cube;
    printf("Введите чему равно ребро: ");
    scanf("%f", &edge);
    
    square_facets = pow(edge, 2);
    square_side_surface = 4 * pow(edge, 2);
    volume_cube = pow(edge, 3);
    
    printf("==== ВЫВОД РЕЗУЛТАТОВ ====\n");
    printf("Площадь грани: %.2f\n Площадь боковой поверхности: %.2f\n Объём куба: %.2f", 
           square_facets, square_side_surface, volume_cube);
    return 0;
}