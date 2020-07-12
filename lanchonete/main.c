/*Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.
 Código Preço
1 R$ 5.00
2 R$ 3.50
3 R$ 4.80
4 R$ 8.90
5 R$ 7.32*/
#include <stdio.h>

int main() {
    int codigo, quantidade ;
    double pagar;
    printf("Informe um codigo [1..5]:");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 1){
        pagar = 5.00 * quantidade;

    } else if (codigo == 2){
        pagar = 3.50 * quantidade;

    } else if (codigo == 3){
        pagar = 4.80 * quantidade;

    } else if (codigo == 4){
        pagar = 8.90 * quantidade;

    } else if (codigo == 5){
        pagar = 7.32 * quantidade;

    }

    printf("VALOR A SER PAGO = R$ %.2lf", pagar);

    return 0;
}
