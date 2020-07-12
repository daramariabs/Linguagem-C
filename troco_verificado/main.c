/*Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.*/
#include <stdio.h>

int main() {
    double preco_uni, dinheiro, troco, tot_compra, falta;
    int quantidade;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_uni);

    printf("Quantidade do produto: ");
    scanf("%d", &quantidade);

    printf("Dinheiro do cliente: ");
    scanf("%lf", &dinheiro);

    tot_compra = (preco_uni * quantidade);

    if (dinheiro >= tot_compra){
        troco = dinheiro - tot_compra;
        printf("TROCO = R$ %.2lf",troco);
    } else{
        printf("DINHEIRO INSUFICIENTE.");
        falta = tot_compra - dinheiro;
        printf("Falta: R$ %.2lf",falta);

    }
    return 0;
}
