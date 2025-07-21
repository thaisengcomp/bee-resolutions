#include <stdio.h>

int main () {

    int x, z, soma = 0, qtd = 0;

    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x){
        scanf("%d", &z);
    }

    while(soma <= z){
        soma += x;
        qtd++;
        x++;
    }

    printf("%d\n", qtd);

    return 0;
}