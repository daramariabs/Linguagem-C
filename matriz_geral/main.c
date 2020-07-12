/*Problema "matriz_geral"
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, i,j, in, col;
    double soma_positivo;

    printf("Qual a ordem da matriz?");
    scanf("%d", &n);

    double mat[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d,%d]:", i,j);
            scanf("%lf", &mat[i][j]);
        }
    }

    soma_positivo = 0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (mat[i][j] > 0){
                soma_positivo = soma_positivo + mat[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma_positivo);

    printf("\nEscolha uma linha: ");
    scanf("%d", &in);
    printf("LINHA ESCOLHIDA:");
    for (i=0; i<n; i++){
        printf("%.1lf ", mat[in][i]);
    }

    printf("\nEscolha uma coluna: ");
    scanf("%d", &col);
    printf("Coluna ESCOLHIDA:");
    for (i=0; i<n; i++){
        printf("%.1lf ", mat[i][col]);
    }

    printf("\nDIAGONAL PRINCIPAL:");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i == j){
                printf("%.1lf ", mat[i][j]);
            }
        }
    }

    //alterando matriz
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }

    printf("\nMATRIZ ALTERADA:\n");
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("%.1lf   ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
