#include <stdio.h>

int main () {

    int n, maior, posicao, i;

    posicao = 0;
    maior = 0;

    for(i = 1; i <= 100; i++){
        scanf("%d", &n);
        if(n > maior){
            maior = n;
            posicao = i;
        }        
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}
