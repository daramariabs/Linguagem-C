/*Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.*/
#include <stdio.h>

int main() {
    int x, y;

    printf("Informe o valor de X:");
    scanf("%d", &x);

    printf("Informe o valor de Y:");
    scanf("%d", &y);

    while (x != y){
        if ( x > y){
            printf("DESCRESCENTE!\n");
        }else{
            printf("CRESCENTE!\n");
        }
        printf("Informe o valor de X:");
        scanf("%d", &x);

        printf("Informe o valor de Y:");
        scanf("%d", &y);
    }
    return 0;
}
