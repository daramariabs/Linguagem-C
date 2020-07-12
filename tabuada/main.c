/*Problema "tabuada"
Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Qual tabuada voce quer ver:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++){
        printf("%d X %d = %d\n",n,i, n * i);
    }
    return 0;
}
