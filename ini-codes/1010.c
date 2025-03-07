#include<stdio.h>

    int main(){

        int cp1, np1, cp2, np2;
        double vu1, vu2, valortotal;

        scanf("%d %d %lf", &cp1, &np1, &vu1);
        scanf("%d %d %lf", &cp2, &np2, &vu2);

        valortotal = (np1 * vu1) + (np2 * vu2);

        printf("VALOR A PAGAR: R$ %.2lf\n", valortotal);

        return 0;
    }