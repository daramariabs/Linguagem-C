/*Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N.*/
#include <stdio.h>

int main() {
    int n, i, f;

    printf("Informe um numero:");
    scanf("%d", &n);

    f = 1;
    if ( n < 15){
        for (i = n ; i > 1 ;--i ){
            f = f * i;

        }
    } else{
        printf("VALOR INVALIDO! Valor maximo possivel e 15:");
    }

    printf("FATORIAL = %d", f);
    return 0;
}
