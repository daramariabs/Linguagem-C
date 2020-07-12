/*Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com.*/
#include <stdio.h>

int main() {
    char temperatura;
    double fh, ce;
    printf("Em qual escala voce deseja converter [C/F]? ");
    fseek(stdin,0,SEEK_END);
    scanf("%c", &temperatura);

    if (temperatura == 'f'){
        printf("Informe a temperatura em Farenheit:");
        scanf("%lf", &fh);

        ce = (fh - 32) / 1.8;

        printf("Temperatura em CELSIUS: %.2lf", ce);
    } else{
        printf("Informe a temperatura em Celsius:");
        scanf("%lf", &ce);

        fh = 1.8 * ce + 32;

        printf("Tempera em FARENHEIT: %.2lf",fh);
    }

    return 0;
}
