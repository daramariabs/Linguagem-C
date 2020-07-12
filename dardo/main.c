/*Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.*/
#include <stdio.h>

int main() {
    double d1, d2, d3, maior;

    printf("Distancia da primeira tentativa:");
    scanf("%lf", &d1);

    printf("Distancia da segunda tentativa:");
    scanf("%lf", &d2);

    printf("Distancia da terceira tentativa:");
    scanf("%lf", &d3);

    if (d1 > d2 && d1 > d3){
        maior = d1;
    } else if (d2 > d3){
        maior = d2;
    } else{
        maior = d3;
    }

    printf("MAIOR DISTANCIA = %.2lf",maior);
    return 0;
}
