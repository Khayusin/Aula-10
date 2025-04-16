#include <stdio.h>
#include "igualdade.h"

int recebeNumero(void){
    int x;

    printf("digite um numero: ") ;
    scanf("%d", &x);

    return x;
}

int main(void){
    int n1, n2, n3, a, b;

    n1 = recebeNumero();
    n2 = recebeNumero();
    n3 = recebeNumero();

        a = maior(n1, n2);
        b = maior(a, n3);

    if (a == 1)
    printf("O maior numero é: %d\n", a);
    else
    printf("O maior numero é: %d\n", b);

    return 0;
}
