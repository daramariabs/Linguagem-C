/*Problema "soma_matrizes"
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada.*/
#include <stdio.h>

int main() {
    int m,n,i,j;

    printf("Quantas linhas tera em cada matriz?");
    scanf("%d", &m);

    printf("Quantas colunas tera em cada matriz?");
    scanf("%d", &n);

    int A[m][n], B[m][n], C[m][n];

    printf("Digite os valores da matriz A:\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d,%d]: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    //gerando nova matriz
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("MATRIZ SOMA:\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
