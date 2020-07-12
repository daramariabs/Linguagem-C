/*Problema "consumo"
Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
médio do carro, com três casas decimais.*/
#include <stdio.h>

int main() {
    double  combustivel , consumo;
    int distancia;

    printf("Distancia total(em km):");
    scanf("%d", &distancia);

    printf("Combustivel utilizado:");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("CONSUMO MEDI0 = %.3lf",consumo);
    return 0;
}
