#include<stdio.h>
#include<stdlib.h>

int main (){

    int linha_inicial, linha_final;
    int coluna, linha;
    char coluna_inicial, coluna_final;

    scanf("%c%d %c%d", &coluna_inicial, &linha_inicial, &coluna_final, &linha_final);
    
    coluna = abs(coluna_final - coluna_inicial);
    linha = abs(linha_final - linha_inicial);

    if((coluna == 2 && linha == 1) || (coluna == 1 && linha == 2)){
        printf("VALIDO\n");
    } else {
        printf("INVALIDO\n");
    }

    return 0;
}