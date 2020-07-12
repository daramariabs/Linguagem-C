/*Problema "media_ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos.*/
#include <stdio.h>

int main() {
    int n, i;
    double valor1, valor2, valor3, media;

    printf("Quantos casos voce vai digitar:");
    scanf("%d", &n);

    for (i = 0; i < n; ++i){
        printf("Informe tres valores:");
        scanf("%lf", &valor1);
        scanf("%lf", &valor2);
        scanf("%lf", &valor3);

        media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / (2 + 3 + 5);

        printf("MEDIA = %.1lf\n", media);

    }
    return 0;
}
