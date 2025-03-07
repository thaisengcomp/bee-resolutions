#include<stdio.h>

int main () {

    int c, i, j;
    float matriz[12][12], soma=0;
    char letra;

    //igual ao de somar linhas, muda apenas as variáveis
    scanf("%d", &c);
    getchar();
    scanf("%c", &letra);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0;i<12;i++){
        soma += matriz[i][c];
    }

    if(letra == 'S'){
        printf("%.1f\n", soma);
    } else if(letra == 'M'){
        printf("%.1f\n", soma/12);
    }

    return 0;
}