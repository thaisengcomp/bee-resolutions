#include <stdio.h>

int main (){

    int n_candidatos, votos, maior, i, carlos;

    scanf("%d", &n_candidatos);
    scanf("%d", &carlos);

    maior = carlos;
    n_candidatos -= 1;

    for(i = 1; i <= n_candidatos; i++){
        scanf("%d", &votos);

        if(votos > maior){
            maior = votos;
        }
    }

    if(maior == carlos){
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}