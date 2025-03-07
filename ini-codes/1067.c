#include <stdio.h>

int main (){

    int n, i;

    scanf("%d", &n);

    i = 1;

    while(i <= n){
        if((i % 2) != 0){
            printf("%d\n", i);
        }
        i += 1;
    }

    return 0;
}