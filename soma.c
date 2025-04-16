#include <stdio.h>

int recebeNumero(void){
    int x;

    printf("digite um numero: ") ;
    scanf("%d", &x);

    return x;
}

int soma(int x, int y) {
    return x + y;
}

void imprimeResultado(int resultado) {
    printf("Resultado: %d\n", resultado);
}

int main(void) {
int n1, n2, resultado;

n1 = recebeNumero();
printf("Digitado: %d\n", n1);

n2 = recebeNumero();
printf("Digitado: %d\n", n2);

resultado = soma(n1, n2);
imprimeResultado(resultado);

return 0;
}
