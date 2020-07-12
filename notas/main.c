/*Problema "notas"
Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO", conforme exemplos.*/

#include <stdio.h>

int main() {
    double n1, n2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &n1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &n2);

    nota_final = n1 + n2;

    printf("NOTA FINAL = %.1lf\n", nota_final);

    if ( nota_final < 60.00){
        printf("REPROVADO");
    }

    return 0;
}
