/*Problema "negativos_matriz"
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz.*/
#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Quantas linhas vai ter a matriz?");
    scanf("%d", &m);

    printf("Quantas colunas vai ter a matriz?");
    scanf("%d", &n);

    int mat[m][n];

    for (i=0; i < m; i++){
        for (j=0; j < n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nNUMEROS NEGATIVOS = ");
    for (i=0; i < m; i++){
        for (j=0; j < n; j++){
            if (mat[i][j] < 0){
                printf("%d ",mat[i][j]);
            }
        }
    }
    return 0;
}
