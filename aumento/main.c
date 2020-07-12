/*Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.
Salário atual Aumento
Até R$ 1000.00 20%
Acima de R$ 1000.00 até R$ 3000.00 15%
Acima de R$ 3000.00 até R$ 8000.00 10%
Acima de R$ 8000.00 5%  */
#include <stdio.h>

int main() {
    double salario, aumento, novo_salario;
    int porceteagem;

    printf("Digite o salario da pessoa: R$ ");
    scanf("%lf", &salario);

    if ( salario <= 1000.00){
        porceteagem = 20;
        aumento = (porceteagem * salario) / 100;
        novo_salario = salario + aumento;

    } else if (salario <= 3000.00){
        porceteagem = 15;
        aumento = (porceteagem * salario) / 100;
        novo_salario = salario + aumento;

    } else if (salario <= 8000.00){
        porceteagem = 10;
        aumento = (porceteagem * salario) / 100;
        novo_salario = salario + aumento;

    } else{
        porceteagem = 5;
        aumento = (porceteagem * salario) / 100;
        novo_salario = salario * aumento;

    }

    printf("NOVO SALARIO = R$ %.2lf\n",novo_salario);
    printf("AUMENTO = R$ %.2lf\n", aumento);
    printf("PORCETAGEM = %d ",porceteagem);
    return 0;
}
