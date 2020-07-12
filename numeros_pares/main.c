/*Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares.*/
#include <stdio.h>

int main() {
    int n, i, cont;

    printf("Quantos numeros vaoce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n; i++){
        printf("Informe um numero: ");
        scanf("%d", &vet[i]);
    }

    cont = 0;
    printf("NUMEROS PARES = ");
    for (i = 0; i < n; i++){
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            cont++;
        }
    }

    printf("\nQauntidade de numeros pares = %d", cont);
    return 0;
}
