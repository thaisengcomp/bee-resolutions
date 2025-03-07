#include <stdio.h>

int main (){

    int n, quantia, i, total_cobaias = 0;
    int sapos = 0, coelhos = 0, ratos = 0;
    char tipo;
    float perc_c, perc_s, perc_r;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        scanf("%d %c", &quantia, &tipo);

        if(tipo == 'C'){
            coelhos += quantia;
        } else if(tipo == 'S'){
            sapos += quantia;
        } else if(tipo == 'R'){
            ratos += quantia;
        }

        total_cobaias += quantia;
    }

    perc_c = ((float)coelhos / total_cobaias) * 100;
    perc_s = ((float)sapos / total_cobaias) * 100;
    perc_r = ((float)ratos / total_cobaias) * 100;

    printf("Total: %d cobaias\n", total_cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", perc_c);
    printf("Percentual de ratos: %.2f %%\n", perc_r);
    printf("Percentual de sapos: %.2f %%\n", perc_s);

    return 0;
}