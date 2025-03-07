#include <stdio.h>

int main (){

    int i, n, total;

    scanf("%d", &n);

    i = 1;

    while(i <= 10){
        total = i * n;
        printf("%d x %d = %d\n", i, n, total);
        i++;
    }

    return 0;
}