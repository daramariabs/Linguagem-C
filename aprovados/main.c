/*Problema "aprovados"
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).*/
#include <stdio.h>

int main() {
    int n, i;
    double media;

    printf("Quantos dados voce ira informar?");
    scanf("%d", &n);

    char vet_nome[n][50];
    double vet_nota1[n], vet_nota2[n];

    for (i =0; i < n; i++){
        printf("Digite nome, rimeira nota e segunda nota do aluno:\n");
        fseek(stdin,0,SEEK_END);
        gets(vet_nome[i]);
        scanf("%lf", &vet_nota1[i]);
        scanf("%lf", &vet_nota2[i]);

    }

    printf("\nALUNOS APROVADOS:\n");
    for (i =0; i < n; i++){
        media = (vet_nota1[i] + vet_nota2[i]) / 2;
        if (media >= 6.0){
            printf("%s\n",vet_nome[i]);
        }
    }
    return 0;
}
