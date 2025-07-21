#include <stdio.h>

int main () {

    int n, t;
    int menor = 21, i, posicao;//21 pq T pode ir ate 20, logo todos serao menores

    scanf("%d", &n);

    for(i = 0; i < n; i++){

        scanf("%d", &t);

        if(t < menor){
            menor = t;
            posicao = i;
        }
    }

    printf("%d\n", posicao+1);

    return 0;
}