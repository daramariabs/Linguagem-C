/*Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.
 Classificação Glicose
Normal Até 100 mg/dl
Elevado Maior que 100 até 140 mg/dl
Diabetes Maior de 140 mg/dl. */

#include <stdio.h>

int main() {
    double glicose;

    printf("MEDIDA DA GLICOSE: ");
    scanf("%lf", &glicose);

    if (glicose <= 100){
        printf("CLASSIFICACAO = Normal.");
    } else if (glicose <= 140){
        printf("CLASSIFICACAO = Elevado.");
    } else{
        printf("CLASSIFICACAO = Diabetes.");
    }
    return 0;
}
