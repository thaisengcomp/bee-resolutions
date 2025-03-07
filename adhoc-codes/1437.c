#include <stdio.h>

int main () {

    int n, posicao, i;
    char numero;

    scanf("%d", &n);
    getchar();

    while(n != 0){

        posicao = 0;

        for(i=0; i<n; i++){
            scanf("%c", &numero);

            if(numero == 'D'){
                posicao = posicao + 1;
            } else {
                posicao = posicao - 1;
            }
        }

        //leste eh 1
        //sul eh 2
        //oeste eh 3
        //norte eh 4

        posicao %= 4;

        if(posicao < 0){
            posicao += 4;
        }

        if((posicao == 1) || (posicao == -1)){
            printf("L\n");
        } else if((posicao == 2) || (posicao == -2)){
            printf("S\n");
        } else if((posicao == 3) || (posicao == -3)){
            printf("O\n");
        } else {
            printf("N\n");
        }

        scanf("%d", &n);
        getchar();
    }

    return 0;
}