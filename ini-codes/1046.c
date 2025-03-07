#include<stdio.h>

int main(){

    int inicio, fim, total;

    scanf("%d %d", &inicio, &fim);

    if(inicio == fim){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else if (inicio > fim){
        total = (24 - inicio) + fim;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    } else if (inicio < fim){
        total = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }

    return 0;
}