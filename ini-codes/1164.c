#include <stdio.h>

int main () {

    int div, numero, resto = 0;
    int casos, i, soma;

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){

        scanf("%d", &numero);

        soma = 0;
        div = 1;

        while(div < numero){

            resto = numero % div;

            if(resto == 0){
                soma += div;
            }

            div++;
        }

        if(soma == numero){
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }

    }

    return 0;
}