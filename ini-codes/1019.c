#include<stdio.h>

int main (){

    int n;
    int horas, minutos, segundos;

    scanf("%d", &n);

    horas = n / 3600;
        n %= 3600;

    minutos = n / 60;
        n %= 60;

    segundos = n;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}