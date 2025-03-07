#include<stdio.h>

int main (){

    int d, i, x, f, dias_pares, dias_impares, resto_divisao; //dia, preco inicial, variacao, futuro;
    double pard;

    scanf("%d %d %d %d", &d, &i, &x, &f);

    resto_divisao = f % 2;
    pard = d % 2;    
    d = i;
    dias_pares = d + x;
    dias_impares = d - x;
    
    if((resto_divisao == 0) && (pard == 0)){
        printf("%d\n", d);
    } else if (resto_divisao == 0 && pard != 0){
        printf("%d\n", d);
    } else if (resto_divisao != 0 && pard == 0){
        printf("%d\n", dias_impares);
    } else {
        printf("%d\n", dias_pares);
    }


    return 0;
}