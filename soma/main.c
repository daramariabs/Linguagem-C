/*Problema "soma"
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números.*/

#include <stdio.h>

int main() {
    int X,Y, soma;

    printf("Informe o valor de X:");
    scanf("%d", &X);

    printf("Informe o valor de Y:");
    scanf("%d", &Y);

    soma = X + Y;

    printf("SOMA = %d",soma);

    return 0;
}
