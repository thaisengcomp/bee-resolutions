#include <stdio.h>

int main () {

    double divisor = 2, um = 1;
    /*mesmo que sejam inteiros, a divisão
    deve dar um resultado decimal*/
    double s, soma;

    soma = um/divisor;

    while(divisor < 100){
        divisor++;
        soma += (um/divisor);
    }

    s = 1 + soma;
    printf("%.2lf\n", s);

    return 0;
}