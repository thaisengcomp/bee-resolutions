#include <stdio.h>

int main () {

    float renda, imposto, valor;

    scanf("%f", &renda);

    if(renda < 2000.01){
        printf("Isento\n");
    } else if(renda < 3000.01){
        valor = renda - 2000.00;
        imposto = valor * 0.08;
    } else if(renda < 4500.01){
        valor = renda - 2000.00;
        imposto = (1000.00 * 0.08) + ((valor - 1000.00) * 0.18);
    } else {
        valor = renda - 2000.00;
        imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + ((valor - 2500.00) * 0.28);
    }

    if(renda > 2000.00){
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}