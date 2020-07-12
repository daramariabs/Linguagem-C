/*Problema "troco"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente (suponha que haja dinheiro suficiente). Seu programa deve
mostrar o valor do troco a ser devolvido ao cliente.*/
#include <stdio.h>


int main() {
    double preco_unitario, valor_dinheiro, troco;
    int quantidade;

    printf("Insira o valor do produto:");
    scanf("%lf", &preco_unitario);

    printf("Informe quantas unidades do produto:");
    scanf("%d",&quantidade);

    printf("Insira o valor do dinheiro dado pelo cliente:");
    scanf("%lf", &valor_dinheiro);

    troco = valor_dinheiro - preco_unitario * quantidade ;

    printf("TROCO = %.2lf",troco);

    return 0;
}
