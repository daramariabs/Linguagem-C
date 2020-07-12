/*Problema "maior_posicao"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como 0 (zero).*/
#include <stdio.h>

int main() {
    int n,i, pos_maior;
    double maior ;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++){
        printf("Informe um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = 0;
    for (i = 0; i < n; i++){
        if (vet[i] > maior){
            maior = vet[i];
            pos_maior = i;
        }
    }

    printf("MAIOR NUMERO = %.1lf\n", maior);
    printf("POSICAO DO MAIOR NUMERO = %d", pos_maior);

    return 0;
}
