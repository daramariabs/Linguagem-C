/*Problema "combustivel" (adaptado de URI 1134)
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem
como as quantidades de cada combustível.*/
#include <stdio.h>

int main() {
    int tipo_combstivel, cont_alcool, cont_gasolina, cont_diesel;

    printf("INFORME UM CODIGO: 1.Alcool 2.Gasolina 3.Diesel 4.Fim :");
    scanf("%d", &tipo_combstivel);

    cont_alcool = 0;
    cont_gasolina = 0;
    cont_diesel = 0;

    while ( tipo_combstivel != 4){

        if (tipo_combstivel < 4){
            while ( tipo_combstivel < 4){
                if (tipo_combstivel == 1){
                    cont_alcool = cont_alcool + 1;

                } else if (tipo_combstivel == 2){
                    cont_gasolina = cont_gasolina + 1;

                } else if (tipo_combstivel == 3){
                    cont_diesel = cont_diesel + 1;

                }
                printf("INFORME UM CODIGO: 1.Alcool 2.Gasolina 3.Diesel 4.Fim :");
                scanf("%d", &tipo_combstivel);

            }

        } else {
            printf("CODIGO INVALIDO! Informe o codigo: 1.Alcool 2.Gasolina 3.Diesel 4.Fim :");
            scanf("%d", &tipo_combstivel);
        }

    }

    printf("MUITO OBRIGADO !!\n");
    printf("QUANTIDADE DE ALCOOL = %d\n", cont_alcool);
    printf("QUANTIDADE DE GASOLINA = %d\n", cont_gasolina);
    printf("QUANTIDADE DE DIESEL = %d\n", cont_diesel);

    return 0;
}
