#include <stdio.h>

long long fat(int n){
    if(n == 1 || n == 0)
        return 1;
    else {
        return n * fat(n-1);
    }
}

int main () {

    int n;
    long long ans;

    scanf("%d", &n);

    ans = fat(n);

    printf("%ld\n", ans);

    return 0;
}