#include <stdio.h>
#include <string.h>

int main () {

    char num[11];
    int i, car;

    scanf("%s", num);

    car = strlen(num);

    for(i = car-1; i >= 0; i--){//o strlen nao pega o \0 e conta a partir de 1,
        printf("%c", num[i]);   //entao a posicao do \0 seria o numero total de caracteres
    }
    printf("\n");

    return 0;
}