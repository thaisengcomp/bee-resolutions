#include <stdio.h>

int main (){

    double s, div;
    double dividendo = 3, divisor = 2;
    /*mesmo que sejam inteiros, a divisão
    deve dar um resultado decimal*/

    div = (dividendo/divisor);

    while(dividendo < 39){
        dividendo += 2;
        divisor *= 2;
        div += (dividendo/divisor);
    }

    s = 1 + div;

    printf("%.2lf\n", s);

    return 0;
}