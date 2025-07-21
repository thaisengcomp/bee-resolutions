#include <stdio.h>

int main () {

    int i, n, count = 1, fib[41];

    scanf("%d", &n);

    fib[0] = 1;
    fib[1] = 1;

    for(i = 2; i < 41; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(i = n-1; i >= 0; i--){
        printf("%d", fib[i]);

        if(count != n){
            printf(" ");
        }

        count++;
    }

    printf("\n");

    return 0;
}