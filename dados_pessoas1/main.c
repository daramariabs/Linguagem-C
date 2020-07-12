/*Problema "dados_pessoas"
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens.*/
#include <stdio.h>

int main() {
    int n, i, contm, contf;
    double maior , menor, soma, media;

    printf("Quantos dados ira informar? ");
    scanf("%d", &n);

    double vet_altura[n];
    char vet_genero[n];

    for (i=0; i<n; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("Altura:");
        scanf("%lf", &vet_altura[i]);
        printf("Genero [M/F]:");
        fseek(stdin,0,SEEK_END);
        scanf("%c", &vet_genero[i]);
    }

    maior = vet_altura[0];
    for (i=1; i<n; i++){
       if (vet_altura[i] > maior){
           maior = vet_altura[i];
       }
    }

    menor = vet_altura[0];
    for (i=1; i<n; i++){
        if (vet_altura[i] < menor){
            menor = vet_altura[i];
        }
    }

    //somatorio e contagem de mulheres e homens
    soma = 0;
    contm = 0;
    contf = 0;
    for (i=0; i<n; i++){
        if (vet_genero[i] == 'f'){
            soma = soma + vet_altura[i];
            contf++;
        } else{
            contm++;
        }
    }
    media = soma / contf;

    printf("MAIOR ALTURA = %.2lf\n", maior);
    printf("MENOR ALTURA = %.2lf\n", menor);
    printf("MEDIA DE ALTURA DAS MULHERES = %.2lf\n",media);
    printf("NUMERO DE HOMENS = %d\n", contm);
    return 0;
}
