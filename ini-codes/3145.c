#include<stdio.h>

int main(){

    double dias, distancia, anoes;

    scanf("%lf %lf", &anoes, &distancia);

    anoes = anoes + 2;
    dias = distancia / anoes;

    printf("%.2lf\n", dias);

    return 0;
}