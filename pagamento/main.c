/*Problema "pagamento"
Fazer um programa o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a quantidade
de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com uma
mensagem explicativa, conforme exemplo.*/
#include <stdio.h>

int main() {
    char nome[50];
    double valor_hora,  valor_pagamento;
    int horas_trabalhada;

    printf("Nome:");
    gets(nome);

    printf("Valor da hora:");
    scanf("%lf", &valor_hora);

    printf("Insira quantas horas foram trabalhadas:");
    scanf("%d", &horas_trabalhada);

    valor_pagamento = valor_hora * horas_trabalhada;

    printf("O pagamento para %s deve ser %.2lf",nome,valor_pagamento);
    return 0;
}
