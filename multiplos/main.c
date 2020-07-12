/*Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.*/
#include <stdio.h>

int main() {
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if (n1 % n2 == 0 || n2 % n1 == 0){
        printf("SAO MULTIPLOS!");
    } else{
        printf("NAO SAO MULTIPLOS!");
    }
    return 0;
}
