#include <stdio.h>

int main () {

    int num[1000];
    int n, i, menor, pos;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%d", &num[i]);

        if(i == 0){
            menor = num[i];
        }
        if(num[i] < menor){
            menor = num[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);

    return 0;
}