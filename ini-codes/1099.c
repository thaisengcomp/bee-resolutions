#include <stdio.h>

void crescente(int *x, int *y){
    int temp;
    if(*x > *y){temp = *x; *x = *y; *y = temp;}
    else {x = x; y = y;}
}

int main () {

    //soma de impares
    int n, x, y, i, soma;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        soma = 0;

            crescente(&x, &y);
            x += 1;

            while(x < y){

                if((x % 2) != 0){
                    soma += x;
                }
                x++;
            }
        printf("%d\n", soma);
    }

    return 0;
}