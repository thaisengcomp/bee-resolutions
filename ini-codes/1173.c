#include <stdio.h>

int main () {

    int n[10], numero, i;

    scanf("%d", &numero);
    n[0] = numero;
    printf("N[0] = %d\n", numero);

    for(i = 1; i < 10; i++){
        n[i] = n[i - 1] * 2;
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}