#include <stdio.h>

int main () {

    int i, escadinha = 0, n, x[1001], diferenca, diferenca2;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    if(n == 1 || n == 2){
        printf("1\n");
        return 0;
    }

    diferenca = x[1] - x[0];
    escadinha = 1;

    for(i = 1; i < n-1; i++){

        diferenca2 = x[i + 1] - x[i];

        if(diferenca != diferenca2){
            escadinha++;
            diferenca = diferenca2;
        }

    }

    printf("%d\n", escadinha);

    return 0;
}