/*Problema "dentro_fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo*/
#include <stdio.h>

int main() {
    int n, i, x, dentro, fora;

    printf("Quantos numeros voce vai digitar:");
    scanf("%d", &n);

    dentro = 0;
    fora = 0;
    for(i = 0; i < n; ++i){
        printf("Digite um numero:");
        scanf("%d", &x);

        if ( x >= 10 && x <= 20){
            dentro = dentro + 1;
        } else{
            fora = fora + 1;
        }
    }

    printf("DENTRO = %d\n", dentro);
    printf("FORA = %d", fora);
    return 0;
}
