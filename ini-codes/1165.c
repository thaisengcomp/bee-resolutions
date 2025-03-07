#include <stdio.h>

int main () {

    int numero, i, testes, resto, div, soma;

    scanf("%d", &testes);

    for(i = 1; i <= testes; i++){

        scanf("%d", &numero);

        soma = 0;
        div = 1;

        while(div <= numero){

            resto = numero % div;

            if(resto == 0){
                soma += div;
            }

            div++;
        }

        if(soma == (1+numero)){
            printf("%d eh primo\n", numero);
        } else {
            printf("%d nao eh primo\n", numero);
        }

    }

    return 0;
}