/*Problema "soma_vetor"
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor*/
#include <stdio.h>

int main() {
    int n, i;
    double soma, media;

    printf("Quantos numeros voce vai digitar:");
    scanf("%d", &n);

    double vet[n];

    for(i = 0; i < n; i++){
        printf("Informe um numero real:");
        scanf("%lf", &vet[i]);
    }

    printf("\nVALORES: ");
    for (i = 0; i <n ; i++){
        printf("%.1lf ", vet[i]);
    }

    soma = 0;
    for (i = 0; i <n ; i++){
        soma = soma + vet[i];
    }
    printf("\nSOMA = %.2lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.2lf", media);
    return 0;
}
