#include <stdio.h>

int main () {

    //novo calculo = nc
    int nc, i;
    float n, soma, media;

    do {

        soma = 0.0;

        for(i = 1; i <= 2; i++){

            scanf("%f", &n);

            while((n < 0) || (n > 10.0)){
                printf("nota invalida\n");
                scanf("%f", &n);
            } 
                soma += n;
        }

        media = soma / 2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &nc);

        while((nc != 1) && (nc != 2)){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &nc);
        }

    } while (nc == 1);

    return 0;
}