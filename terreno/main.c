/*Problema "terreno"
Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo. */
#include <stdio.h>

int main() {
    double largura, comprimento, metro_quadrado, valor_terreno, valor_area;

    printf("Digite a largura do terreno:");
    scanf("%lf",&largura);
    printf("Digite o comprimento do terreno:");
    scanf("%lf",&comprimento);
    printf("Digite o valor do metro quadrado:");
    scanf("%lf",&metro_quadrado);

    valor_area = largura * comprimento;
    valor_terreno = metro_quadrado * valor_area;

    printf("Area do terreno = %.2lf\n",valor_area);
    printf("Preco do terreno = %.2lf",valor_terreno);

    return 0;
}
