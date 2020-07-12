/*Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.*/
#include <stdio.h>

int main() {
    int n, qt_cobaia, i, cont_rato, cont_sapo, cont_coelho, tot_cobaias;
    char tipo_cobaia;
    double perc_rato, perc_sapo, perc_coelho;

    printf("Quantos casos ira digitar:");
    scanf("%d", &n);

    cont_sapo = 0;
    cont_coelho = 0;
    cont_rato = 0;

    for (i = 0; i < n; i++){
        printf("Tipo da cobaia: [R:Rato S:Sapo C:Coelho]: ");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &tipo_cobaia);

        printf("Quantidade utilizada:");
        scanf("%d", &qt_cobaia);

        if (tipo_cobaia == 'r'){
            cont_rato = cont_rato + qt_cobaia;

        } else if (tipo_cobaia == 's'){
            cont_sapo = cont_sapo + qt_cobaia;

        } else if (tipo_cobaia == 'c'){
            cont_coelho = cont_coelho + qt_cobaia;

        }
    }

    tot_cobaias = cont_rato + cont_coelho + cont_sapo;
    perc_rato = (double ) (cont_rato * 100) / tot_cobaias;
    perc_sapo = (double ) (cont_sapo * 100) / tot_cobaias;
    perc_coelho = (double ) (cont_coelho * 100) / tot_cobaias;

    printf("\n");
    printf("TOTAL DE COBAIAS = %d\n", tot_cobaias);
    printf("TOTAL DE RATOS = %d\n", cont_rato);
    printf("TOTAL DE SAPOS = %d\n", cont_sapo);
    printf("TOTAL DE COELHOS = %d\n", cont_coelho);
    printf("PERCENTUAL DE RATOS = %.2lf\n", perc_rato);
    printf("PERCENTUAL DE SAPOS = %.2lf\n", perc_sapo);
    printf("PERCENTUAL DE COELHOS = %.2lf\n", perc_coelho);
    return 0;
}
