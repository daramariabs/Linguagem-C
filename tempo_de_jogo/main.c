/*Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.*/
#include <stdio.h>


int main() {
    int inicio, fim, duracao;

    printf("Hora inicial: ");
    scanf("%d", &inicio);

    printf("Hora final: ");
    scanf("%d", &fim);

    if (inicio < fim){
        duracao =  fim - inicio;
    } else{
        duracao = 24 - (inicio - fim);
    }

    printf("O JOGO DUROU = %d HORAS", duracao);
    return 0;
}
