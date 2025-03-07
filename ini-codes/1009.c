#include<stdio.h>

int main(){

    double sal_fixo, vendas, bonus, total;
    char nome[50];

    scanf("%s\n", nome);
    scanf("%lf\n", &sal_fixo);
    scanf("%lf", &vendas);

    bonus = vendas * 0.15;
    total = bonus + sal_fixo;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}