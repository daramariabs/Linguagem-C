/*Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".*/
#include <stdio.h>

int main() {
    int idade, cont;
    double media, soma;

    printf("Informe as idades:\n");
    scanf("%d", &idade);


    if (idade > 0){
        soma = 0;
        cont = 0;
        while (idade > 0){
            soma = soma + idade;
            cont = cont + 1;

            scanf("%d", &idade);
        }
        media = soma / cont;
        printf("MEDIA = %.2lf", media);
    } else{
        printf("IMPOSSIVEL CALCULAR");
    }



    return 0;
}
