#include <stdio.h>

int main () {

    float matriz[12][12], soma = 0;
    int i, j, elementos = 0;
    char op;

    scanf("%c", &op);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            if((j+i) > 11){
                soma += matriz[i][j];
                elementos++;
            }
        }
    }

    if(op == 'S'){
        printf("%.1f\n", soma);
    } else if(op == 'M'){
        printf("%.1f\n", soma/elementos);
    }

    return 0;
}