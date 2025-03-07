#include<stdio.h>

int main () {

    int l, d, k, p;
    int total_valor, pedagios;

    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);

    pedagios = (l / d) * p;
    total_valor = (l * k) + pedagios;
    
    printf("%d\n", total_valor);

    return 0;
}