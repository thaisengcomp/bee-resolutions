#include<stdio.h>

    int main(){

        int c, n, resto;

        scanf("%d %d", &c, &n);

        resto = c % n;

        printf("%d\n", resto);

        return 0;
    }