#include <stdio.h>

int main () {

    int n, i, qtd, total, caso = 1;

    while(scanf("%d", &n) != EOF){

        total = 1;

        for(i = 1; i <= n; i++){ //conta os casos totais
            total += i;
        }

        if(total < 2){
            printf("Caso %d: %d numero\n", caso, total);
        } else {
            printf("Caso %d: %d numeros\n", caso, total);
        }

        printf("0");
        
        for(i = 1; i <= n; i++){

            qtd = 0;

            while(qtd < i){
                printf(" %d", i);
                qtd++;
            }
        }
        caso++;
        printf("\n\n");
    }

    return 0;
}