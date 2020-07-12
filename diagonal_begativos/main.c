/*Problema "diagonal_negativos"
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz.*/
#include <stdio.h>

int main() {
    int n, i,j, cont;

    printf("Qual a ordem da matriz?");
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i <n; i++){
        for(j= 0 ; j < n ; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nDIAGONAL PRINCIPAL: \n");
    for (i = 0; i <n; i++){
        for(j= 0 ; j < n ; j++){
            if (i == j){
                printf("%d  ", mat[i][j]);
            }
        }
    }

    cont = 0;
    for (i = 0; i <n; i++){
        for(j= 0 ; j < n ; j++){
            if (mat[i][j] < 0){
                cont++;
            }
        }
    }

    printf("\nNEGATIVOS = %d",cont);
    return 0;
}
