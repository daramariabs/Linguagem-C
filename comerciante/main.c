/*Problema "comerciante"
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
 lucro < 10%
 10% ≤ lucro ≤ 20%
 lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total.*/
#include <stdio.h>

int main() {
    int n, i, abaixo, entre, acima;
    double lucro, perc_lucro, tot_venda, tot_compra, tot_lucro;

    printf("Quantos produtos ira informar?");
    scanf("%d", &n);

    char vet_nome[n][50];
    double vet_precocompra[n], vet_precovenda[n];

    for (i = 0; i < n; i++){
        printf("Produto %d:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(vet_nome[i]);

        printf("Preco de compra:");
        scanf("%lf", &vet_precocompra[i]);

        printf("Preco de venda:");
        scanf("%lf", &vet_precovenda[i]);
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (i = 0; i < n; i++){
        lucro = vet_precovenda[i] - vet_precocompra[i] ;
        perc_lucro = lucro / vet_precocompra[i] * 100;

        if (perc_lucro < 10.0){
            abaixo++;
        } else if (perc_lucro <= 20.0){
            entre++;
        } else{
            acima++;
        }
    }

    tot_compra =0;
    tot_venda = 0;
    for (i = 0; i < n; i++){
       tot_compra = tot_compra + vet_precocompra[i];
       tot_venda = tot_venda + vet_precovenda[i];
    }
    tot_lucro = tot_venda - tot_compra;

    printf("RELATORIO:\n");
    printf("Produtos com lucro abaixo de 10 porcento: %d\n",abaixo);
    printf("Produtos com lucro entre 10 e 20 porcento: %d\n",entre);
    printf("Produtos com lucro acima de 20 porcento %d\n",acima);
    printf("Valor total de compra: %.2lf\n", tot_compra);
    printf("Valor total de venda: %.2lf\n", tot_venda);
    printf("Valor total de lucros: %.2lf\n", tot_lucro);
    return 0;
}
