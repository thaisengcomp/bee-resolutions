#include <stdio.h>

int main () {

    float matriz[12][12];
    int l, i, j;
    float soma=0;
    char letra;

    scanf("%d", &l);
    getchar();
    scanf("%c", &letra);

    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<12; i++){
        soma += matriz[l][i];
    }

    if(letra == 'S'){
        printf("%.1f\n", soma);
    } else if(letra == 'M'){
        printf("%.1f\n", soma/12);
    }

    return 0;
}