#include <stdio.h>
#include <math.h>

int digitos(int n){
    if(n < 10){return 1;}
    else if(n < 100){return 2;}
    else if(n < 1000){return 3;}
    else if(n < 10000){return 4;}
    else if(n < 100000){return 5;}
    else if(n < 1000000){return 6;}
    else if(n < 10000000){return 7;}
    else if(n < 100000000){return 8;}
    else {return 9;}
}

int main () {

    int i, j, t, maior, largura, dig;
    int matriz[15][15];

    scanf("%d", &t);

    while(t != 0){

        for(i = 0; i < t; i++){
            for(j = 0; j < t; j++){
                dig = pow(2, j+i);
                matriz[i][j] = dig;
            }
        }

        maior = matriz[t-1][t-1];
        largura = digitos(maior);

        for(i = 0; i < t; i++){
            for(j = 0; j < t; j++){

                if(j==0){
                    printf("%*d", largura, matriz[i][j]);
                } else {
                    printf(" %*d", largura, matriz[i][j]);
                }

                if(j == t-1){
                    printf("\n");
                }
            
            }
        }
        printf("\n");
        scanf("%d", &t);
    }

    return 0;
}