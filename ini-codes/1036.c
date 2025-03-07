#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c, formula_mais, formula_menos, raiz, raiz2;

    scanf("%lf %lf %lf", &a, &b, &c);

    raiz2 = (b*b) -4 * a * c;
    raiz = sqrt(raiz2);
    formula_mais = (-(b) + raiz) / (2 * a);
    formula_menos = (-(b) - raiz) / (2 * a);

    if((a == 0) || (raiz2 < 0)){
        printf("Impossivel calcular\n");
    } else {
        printf("R1 = %.5lf\n", formula_mais);
        printf("R2 = %.5lf\n", formula_menos);
    }

    return 0;
}