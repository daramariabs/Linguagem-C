/*Problema "soma_impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles.*/
#include <stdio.h>

int main() {
    int x, y, i,soma;

    printf("Digite dois numeros:");
    scanf("%d", &x);
    scanf("%d", &y);

    soma = 0;
    if ( x > y){
        for (i = x - 1; i > y; --i){
            if ( i % 2 != 0){
                soma = soma + i;
            }

        }
    } else{
        for ( i = x + 1; i < y ; ++i) {
            if ( i % 2 != 0){
                soma = soma + i;
            }

        }
    }
    printf("SOMA = %d", soma);
    return 0;
}
