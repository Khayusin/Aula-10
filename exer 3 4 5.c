#include <stdio.h>


int pedir_numero() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    return num;
}


int somar(int a, int b) {
    return a + b;
}


void imprimir_resultado(int soma) {
    printf("O resultado da soma é: %d\n", soma);
}

int main() {

    int num1 = pedir_numero();
    int num2 = pedir_numero();
    
    int resultado = somar(num1, num2);
    
    imprimir_resultado(resultado);
    
    return 0;
}