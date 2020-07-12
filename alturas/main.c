/*Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.*/
#include <stdio.h>

int main() {
    int n, i, cont_menor;
    double soma_idade, media_idade, perc_menor;

    printf("Quantos dados voce vai digitar?");
    scanf("%d", &n);

    char vet_nome[n][50];
    int vet_idade[n];
    double vet_altura[n];

    for(i = 0; i < n; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome:");
        fseek(stdin,0,SEEK_END);
        gets(vet_nome[i]);
        printf("Idade:");
        scanf("%d", &vet_idade[i]);
        printf("Altura:");
        scanf("%lf", &vet_altura[i]);
    }

    soma_idade = 0;
    cont_menor = 0;
    for(i = 0; i < n; i++){
        if (vet_idade[i] < 16){
            cont_menor = cont_menor + 1;
        }
       soma_idade = soma_idade + vet_idade[i];
    }
    media_idade = soma_idade / n;
    printf("MEDIA IDADES = %.2lf\n", media_idade);

    perc_menor = cont_menor * 100.0 / n;
    printf("Porcentagem dos menores de 16 anos = %.2lf%%\n", perc_menor);

    for(i = 0; i < n; i++){
        if (vet_idade[i] < 16){
            printf("%s\n", vet_nome[i]);
        }
    }


    return 0;
}
