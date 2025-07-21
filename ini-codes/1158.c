#include <stdio.h>

int main () {

    int n, x, y, i, qtd, soma;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        scanf("%d %d", &x, &y);

        soma = 0;
        qtd = 0;

        while(qtd < y){
            if(x%2 != 0){
                soma += x;
                qtd++;
            }
            x++;
        }

        printf("%d\n", soma);

    }

    return 0;
}