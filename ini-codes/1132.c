#include <stdio.h>

void crescente(int *a, int *b){
    int temp;
    if(*a > *b) {temp = *a; *a = *b; *b = temp;}
}

int main (){

    int x, y, soma;

    scanf("%d %d", &x, &y);

    soma = 0;

    crescente(&x, &y);

    while(x <= y){
        if((x % 13) != 0){
            soma += x;
        }

        x++;
    }

    printf("%d\n", soma);

    return 0;
}