/*Problema "coordenadas" (adaptado de URI 1041)
Leia os valores das coordenadas X e Y de um ponto no plano
cartesiano. A seguir, determine qual o quadrante ao qual pertence o
ponto (Q1, Q2, Q3 ou Q4). Se o ponto estiver na origem, escreva a
mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva
“Eixo X” ou “Eixo Y”, conforme for a situação.*/
#include <stdio.h>

int main() {
    double x, y;

    printf("Valor de X:");
    scanf("%lf", &x);

    printf("Valor de Y:");
    scanf("%lf", &y);

    if (x == 0 && y == 0){
        printf("ORIGEM");

    } else if (x > 0 && y > 0){
        printf("QUADRANTE 1");

    } else if (x < 0 && y > 0){
        printf("QUADRANTE 2");

    } else if (x < 0 && y < 0){
        printf("QUADRANTE 3");

    } else if (x > 0 && y < 0){
        printf("QUADRANTE 4");

    } else if (x == 0){
        printf("EIXO Y");

    } else{
        printf("EIXO X");
    }
    return 0;
}
