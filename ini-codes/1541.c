#include <stdio.h>
#include <math.h>

int main () {

    int a, b, c, area, lado;
    double terreno;

    scanf("%d", &a);

    while(a != 0){ //somente a determina o encerramento do codigo

        scanf("%d%d", &b, &c);

        area = a*b;
        terreno = area / (c/100.0); //(c/100.0) eh o percentual
        lado = (int)sqrt(terreno);//valor truncado = int

        printf("%d\n", lado);

        scanf("%d", &a);
    }

    return 0;
}