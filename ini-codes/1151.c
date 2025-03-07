#include <stdio.h>

int main () {

    int i, n;
    long long j[46];

    scanf("%d", &n);

    if(n == 1){
        printf("0\n");
        return ;
    }

    j[0] = 0;
    j[1] = 1;

    for(i=2; i<46;i++){
        j[i] = j[i-1] + j[i-2];
    }

    for(i=0; i<n; i++){
        printf("%lld", j[i]);
        if(i < n-1){
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}