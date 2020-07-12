/*Problema "mais_velho"
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.*/
#include <stdio.h>
#include <string.h>

int main() {
    int n, i, maior_idade;
    char nome[50];

    printf("Quantos dados voce vai informar? ");
    scanf("%d", &n);

    char vet_nome[n][50];
    int vet_idade[n];

    for (i = 0; i < n; i++){
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin,0,SEEK_END);
        gets(vet_nome[i]);

        printf("Idade:");
        scanf("%d", &vet_idade[i]);
    }

    maior_idade = 0;
    for (i = 0; i < n; i++){
        if (vet_idade[i] > maior_idade){
            maior_idade = vet_idade[i];

            //copiando os dados do vetor para a variavel nome
            strcpy(nome,vet_nome[i]);
        }
    }

    printf("PESSOA MAIS VELHA = %s", nome);

    return 0;
}
