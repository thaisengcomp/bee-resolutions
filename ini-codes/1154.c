#include <stdio.h>

int main () {

    int total = 0;
    float idade, soma = 0, divisao;

    scanf("%f", &idade);

    while(idade > 0){

        soma += idade;
        total += 1;

        scanf("%f", &idade);
    }

    divisao = soma / total;
    printf("%.2f\n", divisao);

    return 0;
}