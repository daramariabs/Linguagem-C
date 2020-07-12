/*Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.*/
#include <stdio.h>

int main() {
    int n, i, num1, num2;
    double div;

    printf("Quantos casos voce vai digitar?");
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        printf("Informe o numerador:");
        scanf("%d", &num1 );
        printf("Informe o denominador:");
        scanf("%d", &num2);

        if ( num2 == 0){
            printf("DIVISAO IMPOSSIVEL.\n");
        } else{
            div = (double ) num1 / num2;
            printf("DIVISAO = %.2lf\n", div);
        }
    }
    return 0;
}
