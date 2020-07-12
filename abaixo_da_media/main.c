/*Problema "abaixo_da_media"
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.*/
#include <stdio.h>

int main() {
    int n, i;
    double soma, media;

    printf("Quantos elementos vai ter o vetor?");
    scanf("%d", &n);

    double vet[n];

    printf("Informe os valores do vetor:\n");
    for (i =0; i < n; i++){
        scanf("%lf", &vet[i]);
    }

    soma =0;
    for (i =0; i < n; i++){
        soma = soma + vet[i];
    }
    media = soma / n;
    printf("MEDIA DO VETOR = %.3lf", media);

    printf("\nVALORES ABAIXO DA MEDIA DO VETOR = ");
    for (i =0; i < n; i++){
        if (vet[i] < media){
            printf("%.1lf  ", vet[i]);
        }
    }
    return 0;
}
