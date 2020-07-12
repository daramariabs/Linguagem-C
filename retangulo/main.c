/* Problema "retangulo"
Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos. */

#include <stdio.h>
#include <math.h>

int main() {
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo:");
    scanf("%lf", &base);
    printf("Altura do retangulo:");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = ( base + altura) * 2;
    diagonal = sqrt(pow(base,2) + pow(altura,2));

    printf("AREA = %.4lf\n",area);
    printf("PERIMETRO = %.4lf\n",perimetro);
    printf("DIAGONAL = %.4lf",diagonal);
    return 0;
}
