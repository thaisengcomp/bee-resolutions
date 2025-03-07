#include<stdio.h>

    int main(){

        double tempo, vm, litros;

        scanf("%lf", &tempo);
        scanf("%lf", &vm);

        litros = ((tempo * vm) / 12);

        printf("%.3lf\n", litros);

        return 0;
    }