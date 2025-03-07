#include<stdio.h>
#include<math.h>

    int main(){

        float x1, y1, x2, y2;
        double distancia, raiz;
        double p1, p2, pot1, pot2;

        scanf("%f %f", &x1, &y1);
        scanf("%f %f", &x2, &y2);

        p1 = x2 - x1;
        p2 = y2 - y1;
        pot1 = pow(p1,2);
        pot2 = pow(p2,2);
        distancia = pot1 + pot2;
        raiz = sqrt(distancia);

        printf("%.4lf\n", raiz);

        return 0;
    }