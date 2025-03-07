#include<stdio.h>

int main (){

    int diac, horac, minutoc, segundoc;
    int diaf, horaf, minutof, segundof;
    int dias, horas, minutos, segundos;

    scanf("Dia %d", &diac);
    scanf("%d : %d : %d\n", &horac, &minutoc, &segundoc);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minutof, &segundof);

    dias = diaf - diac;
    horas = horaf - horac;
    minutos = minutof - minutoc;
    segundos = segundof - segundoc;

    //se os segundos são menores que 0, eles ganham 60 adicionais para fazer a diferenca
    //e tiram 1 unidade dos minutos
    //ex: 23 - 24 = -1; -1 + 60 = 59
    if(segundos < 0){
        segundos += 60;
        minutos -= 1;
    }

    //se os minutos são menores que 0, eles ganham 60 adicionais para fazer a diferenca
    //e tiram 1 unidade das horas
    //ex: 23 - 24 = -1; -1 + 60 = 59
    if(minutos < 0){
        minutos += 60;
        horas -= 1; 
    }

    //se as horas são menores que 0, eles ganham 24 adicionais para fazer a diferenca
    //e tiram 1 unidade dos dias
    //ex: 23 - 24 = -1; -1 + 24 = 23
    if(horas < 0){
        horas += 24;
        dias -= 1;
    }

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}