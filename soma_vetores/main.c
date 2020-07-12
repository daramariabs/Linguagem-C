/*Problema "soma_vetores"
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor C gerado.*/
#include <stdio.h>

int main() {
    int n, i;

    printf("Quantos numero voce vai digitar? ");
    scanf("%d", &n);

    int A[n], B[n], C[n];

    printf("Informe valores do vetor A:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    printf("Informe valores do vetor B:\n");
    for (i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    //preenchendo vetor C
    for (i = 0; i < n; i++){
        C[i] = A[i] + B[i];
    }

    printf("\nVETOR GERADO: \n");
    for (i = 0; i < n; i++){
        printf("%d\n",C[i]);
    }
    return 0;
}
