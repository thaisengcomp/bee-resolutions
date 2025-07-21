#include <stdio.h>

int main () {

    double h, p; 
    /*mesmo que sejam lidos apenas numeros inteiros, 
    a divisao entre dados do tipo inteiro resulta tambem
    em um inteiro, o que nao resolve o problema*/

    scanf("%lf%lf", &h, &p);

    printf("%.2lf\n", h/p);

    return 0;
}