#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer,int length){
    fgets(buffer,length,stdin);
    strtok(buffer,"\n");
}

int main() {
    int idade;
    double salario,altura;
    char genero;
    char nome[50];

    printf("Informe a idade:");
    scanf("%d", &idade);
    printf("Informe o salario:");
    scanf("%lf", &salario);
    printf("Informe a altura:");
    scanf("%lf", &altura);

    printf("Informe o genero:");
    limpar_entrada();
    scanf("%c",&genero);
    printf("Informe o nome");
    limpar_entrada();
    ler_texto(nome,50);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);


    return 0;
}
