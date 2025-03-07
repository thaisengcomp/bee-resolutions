#include <stdio.h>

int main () {

    int t, i, n;
    unsigned long long fib[61];

    scanf("%d", &t);

    fib[0] = 0;
    fib[1] = 1;
    for(i = 2; i <= 60; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for(i = 0; i < t; i++){
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}