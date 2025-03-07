#include<stdio.h>

int main (){

    float salario, perc, aumento;
    int porcentagem;

    scanf("%f", &salario);

    if (salario < 400.01){
        perc = 0.15;
        porcentagem = 15;
    } else if (salario < 800.01){
        perc = 0.12;
        porcentagem = 12;
    } else if (salario < 1200.01){
        perc = 0.10;
        porcentagem = 10;
    } else if (salario < 2000.01){
        perc = 0.07;
        porcentagem = 7;
    } else if (salario > 2000.01){
        perc = 0.04;
        porcentagem = 4;
    }

    aumento = (salario * perc) + salario;
    perc = aumento - salario;
	
    printf("Novo salario: %.2f\n", aumento);
    printf("Reajuste ganho: %.2f\n", perc);
    printf("Em percentual: %d %%\n", porcentagem);

    return 0;
}