#include<stdio.h>

int main (){

    int a, b, ganha;

    scanf("%d %d", &a, &b);

    if(a == b){
        ganha = a;
    } else if (a > b){
        ganha = a;
    } else if (a < b){
        ganha = b;
    }

    printf("%d\n", ganha);

    return 0;
}