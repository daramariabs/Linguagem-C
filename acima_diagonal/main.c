/*Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).*/
#include <stdio.h>

int main() {
    int n,i,j, soma;

    printf("Qual a ordem da matriz?");
    scanf("%d", &n);

    int mat[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d,%d]",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma =0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
           if (j > i){
               soma = soma + mat[i][j];
           }
        }
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);
    return 0;
}
