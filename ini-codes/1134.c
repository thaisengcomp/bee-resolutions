#include <stdio.h>

int main () {

    int qtd_gas = 0, qtd_dies = 0, qtd_alc = 0;
    int num;

    scanf("%d", &num);

    while(num != 4){
            while(num < 1 || num > 4){
                scanf("%d", &num);
            }

            if(num == 1){
                qtd_alc++;
            } else if(num == 2){
                qtd_gas++;
            } else if(num == 3){
                qtd_dies++;
            }

        scanf("%d", &num);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", qtd_alc);
    printf("Gasolina: %d\n", qtd_gas);
    printf("Diesel: %d\n", qtd_dies);

    return 0;
}

