#include <stdio.h>

int main () {

    int hi, hf, mi, mf;
    int horas, minutos;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    horas = hf - hi;
    minutos = mf - mi;

    if(horas == 0 && minutos == 0){
        horas = 24;
        minutos = 0;
    }

    if(minutos < 0){
        minutos += 60;
        horas -= 1;
    }

    if(horas < 0){
        horas += 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}