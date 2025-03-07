#include<stdio.h>
#include<math.h>

    int main(){

        double raio, volume, pi, potencia;

        scanf("%lf", &raio);

        pi = 3.14159;
        potencia = pow(raio,3);
        volume = (4.0/3.0) * pi * potencia; 
        
        printf("VOLUME = %.3lf\n", volume);

        return 0;
    }