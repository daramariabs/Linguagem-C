/*Problema "media_pares "
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR"*/
#include <stdio.h>

int main() {
    int n, i, cont;
    double soma_par, media_par;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    printf("Informe os valores do vetor:\n");
    for (i = 0; i< n; i++){
        scanf("%d", &vet[i]);
    }

    soma_par = 0;
    cont = 0;
    for (i = 0; i< n; i++){
        if (vet[i] % 2 == 0){
            soma_par = soma_par + vet[i];
            cont++;
        }
    }

    if (cont == 0){
        printf("NENHUM NUMERO PAR");
    } else{
        media_par = soma_par / cont;
        printf("MEDIA DOS PARES = %.1lf", media_par);
    }

    return 0;
}
