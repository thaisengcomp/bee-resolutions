#include<stdio.h>

int main(){

    int codigo, qtd;
    double cachorro_quente, salada, bacon, torrada, refri;

    scanf("%d%d", &codigo, &qtd);

    if(codigo == 1){
        cachorro_quente = qtd * 4.00;
        printf("Total: R$ %.2lf\n", cachorro_quente);
    } else if(codigo == 2){
        salada = qtd * 4.50;
        printf("Total: R$ %.2lf\n", salada);
    } else if (codigo == 3){
        bacon = qtd * 5.00;
        printf("Total: R$ %.2lf\n", bacon);
    } else if (codigo == 4){
        torrada = qtd * 2.00;
        printf("Total: R$ %.2lf\n", torrada);
    } else if (codigo == 5){
        refri = qtd * 1.50;
        printf("Total: R$ %.2lf\n", refri);
    } else {}

    return 0;
}