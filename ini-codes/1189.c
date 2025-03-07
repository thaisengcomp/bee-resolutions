#include <stdio.h>

int main () {

    double matriz[12][12];
    double soma=0;
    int i, j, aux, elementos=0;
    char letra;

    scanf("%c",&letra);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    aux = 11;

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(j<i && j<aux){
                soma+=matriz[i][j];
                elementos++;
            }
        }
        aux--;
    }

    if(letra == 'S'){
        printf("%.1lf\n", soma);
    } else if(letra == 'M'){
        printf("%.1lf\n", soma/elementos);
    }

    return 0;
}