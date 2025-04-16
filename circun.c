#include <stdio.h>
#include "util.h"

int main(void) {
    double r;
    
        printf("Digite o raio do círculo: ");
        scanf("%lf", &r);
    
        printf("Diâmetro: %.2f\n", diametro(r));
        printf("Circunferência: %.2f\n", circunferencia(r));
        printf("Área: %.2f\n", area(r));
    
    return 0;

}
