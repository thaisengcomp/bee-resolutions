#include <stdio.h>

int main () {

    int n, i, qtd=0;
    long int a, f, total_fotons;

    scanf("%ld %d", &a, &n);

    for(i = 1; i <= n; i++){
        scanf("%ld", &f);
        total_fotons = f*a;
        if(total_fotons >= 40000000){
            qtd++;
        }
    }

    printf("%d\n", qtd);

    return 0;
}