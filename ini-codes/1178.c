#include <stdio.h>

int main () {

    int i;
    double numero, n[100];

    scanf("%lf", &numero);
    n[0] = numero;
    printf("N[0] = %.4lf\n", numero);

    for(i = 1; i < 100; i++){
        n[i] = n[i - 1] / 2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}