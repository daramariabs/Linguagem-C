/*Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez.*/
#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3){
        printf("MENOR = %d", n1);
    }
    else if (n2 < n3){
        printf("MENOR = %d", n2);
    }
    else{
        printf("MENOR = %d",n3);
    }
    return 0;
}
