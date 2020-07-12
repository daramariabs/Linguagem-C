/*Problema "medidas"
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C*/
#include <stdio.h>

int main() {
    double A,B,C, quadrado, trian_retan,trapezio;

    printf("Medida A:");
    scanf("%lf", &A);

    printf("Medida B:");
    scanf("%lf", &B);

    printf("Medida C:");
    scanf("%lf", &C);

    quadrado = A * A;
    trian_retan = (A * B) / 2;
    trapezio = ((A + B)/2) * C;

    printf("AREA DO QUADRADO = %.4lf\n",quadrado);
    printf("AREA DO TRIANGULO RETANGULO = %.4lf\n",trian_retan);
    printf("AREA DO TRAPEZIO = %.4lf\n",trapezio);
    return 0;
}
