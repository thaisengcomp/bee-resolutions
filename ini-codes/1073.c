#include<stdio.h>
#include<math.h>

int main (){

    int i, n, pot;

    scanf("%d", &n);

    i = 1;

    while(i <= n){
        if((i % 2) == 0){
            pot = pow(i,2);
            printf("%d^2 = %d\n", i, pot);
        } else {}

        i += 1;
    }

    return 0;
}