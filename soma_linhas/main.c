/*Problema "soma_linhas"
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.*/
#include <stdio.h>

int main() {
    int m, n, i,j;
    double soma;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &m);

    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &n);

    double mat[m][n], vet[m];

    for (i = 0; i < m; i++){
        for (j = 0; j <n ; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }


    for (i = 0; i < m; i++){
        soma = 0;
        for (j = 0; j <n ; j++){
            soma = soma + mat[i][j];
        }
        vet[i] = soma;
    }

    printf("\n VETOR GERADO: ");
    for (i = 0; i < m; i++){
        printf("%.1lf ", vet[i]);
    }
    return 0;
}
