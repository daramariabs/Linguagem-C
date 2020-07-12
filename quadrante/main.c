/*Problema "quadrante" (adaptado de URI 1115)
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).*/
#include <stdio.h>

int main() {
    double x, y;

    printf("Digite os valores das coordenadas X e Y:\n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while (x != 0 && y != 0){
        if (x > 0 && y > 0 ){
            printf("QUADRANTE Q1\n");

        } else if (x < 0 && y > 0){
            printf("QUADRANTE Q2\n");

        } else if (x < 0 && y < 0){
            printf("QUADRANTE Q3\n");

        } else if (x > 0 && y < 0){
            printf("QUADRANTE Q4\n");

        }

        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%lf", &x);
        scanf("%lf", &y);
    }
    return 0;
}
