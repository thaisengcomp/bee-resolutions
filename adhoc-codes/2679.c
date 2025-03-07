#include<stdio.h>

int main (){

    int x, div;

    scanf("%d", &x);

    div = x % 2;

    if(div == 0){
        x = x+2;
        printf("%d\n", x);
    } else {
        x = x+1;
        printf("%d\n", x);
    }

    return 0;
}