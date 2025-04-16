#include <stdio.h>
#include "igualdade.h"

int main(void){

int n1, n2, numeroigual;

printf("Digite o primeiro numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

numeroigual = igual(n1, n2);

if (numeroigual == 1) {
printf("Os numeros sao iguais? Sim!\n");
} else {
printf("Os numeros sao iguais? Não!\n");

printf("O maior numero e: %d\n", (maior(n1, n2)));
printf("O menor numero e: %d\n", (menor(n1, n2)));

}

return 0;
}
