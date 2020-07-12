/*Problema "negativos"
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos.*/
#include <stdio.h>

int main() {
    int N,i;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d", &N);

    int vet[N];

    for (i = 0; i < N; i++){
        printf("Informe um numero:");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    for (i = 0; i < N; i++){
        if (vet[i] < 0){
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}
