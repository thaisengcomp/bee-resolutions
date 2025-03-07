#include<stdio.h>

int main () {

    float soma=0, matriz[12][12];
    int i, j, elementos=0;
    char op;

    scanf("%c", &op);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(j > i){
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