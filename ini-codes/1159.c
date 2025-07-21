#include <stdio.h>

int main () {

    int x, i, soma;

    scanf("%d", &x);

    while(x != 0){

        i = 0;
        soma = 0;

        while(i < 5){
            if((x%2) == 0){
                i++;
                soma += x;
            }
            x++;
        }

        printf("%d\n", soma);

        scanf("%d", &x);
    }

    return 0;
}