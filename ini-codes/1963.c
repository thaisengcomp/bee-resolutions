#include<stdio.h>

int main (){

    double valor_antigo, valor_atual;
    double porcentagem;

    scanf("%lf %lf", &valor_antigo, &valor_atual);

        porcentagem = (100 * valor_atual) / valor_antigo;

    if(porcentagem > 100){
        porcentagem = porcentagem - 100;
    } else {
        porcentagem = 100 - porcentagem;
    }

    printf("%.2lf%%\n", porcentagem);

    return 0;
}