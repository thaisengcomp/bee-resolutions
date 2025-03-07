#include<stdio.h>

    int main(){

        int distancia;
        double combustivel, media;

        scanf("%d", &distancia);
        scanf("%lf", &combustivel);

        media = distancia / combustivel;
        
        printf("%.3lf km/l\n", media);

        return 0;
    }