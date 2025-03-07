#include <stdio.h>

int main (){

    int x, y, maior, menor, impar;

    scanf("%d\n%d", &x, &y);

    if(x < y){
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    menor += 1;
    impar = 0;

    while(menor < maior){
        if((menor % 2) != 0){
            impar += menor;
        } else {}
        menor += 1;
    }

    printf("%d\n", impar);

    return 0;
}