#include <stdio.h>

int main (){

    int n, i;
    int par, impar, positivo, negativo;

    positivo = 0;
    negativo = 0;
    impar = 0;
    par = 0;

    for(i = 1; i <= 5; i++){

        scanf("%d", &n);
        
        if(n > 0){
            positivo += 1;
        }
        if(n < 0){
            negativo += 1;
        }
        if((n % 2) == 0){
            par += 1;
        }
        if((n % 2) != 0){
            impar += 1;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}