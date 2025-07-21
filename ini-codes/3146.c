#include <stdio.h>

int main () {
    
    double r;

    scanf("%lf", &r);

    //posso fazer uma variavel que receba o valor da resposta:
    //ans = 2*3.14.r
    //ou posso fazer diretamente (lembrando que 2 * PI é 6.28):
    printf("%.2lf\n", 6.28*r);

    return 0;
}