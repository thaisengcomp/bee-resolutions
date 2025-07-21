#include <stdio.h>

int main () {

    int n, brancas, pretas;

    scanf("%d", &n);

    if(n%2 == 0){
        brancas = (n/2) * n;
        pretas = (n/2) * n;
    } else {
        brancas = (n * n) / 2 + 1; //divisao de inteiros não quebra o numero, por isso dá para adicionar uma unidade so
        pretas = (n * n) / 2;
    }

    printf("%d casas brancas e %d casas pretas\n", brancas, pretas);

    return 0;
}