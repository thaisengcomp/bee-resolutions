#include <stdio.h>

int main () {

    int dia, mes;

    scanf("%d/%d", &dia, &mes);
    
    if(mes == 3){
        if(dia >= 21){
            printf("aries\n");
        } else {
            printf("peixes\n");
        }
    } else if(mes == 4){
        if(dia <= 20){
            printf("aries\n");
        } else {
            printf("touro\n");
        }
    } else if(mes == 5){
        if(dia <= 20){
            printf("touro\n");
        } else {
            printf("gemeos\n");
        }
    } else if(mes == 6){
        if(dia <= 20){
            printf("gemeos\n");
        } else {
            printf("cancer\n");
        }
    } else if(mes == 7){
        if(dia <= 22){
            printf("cancer\n");
        } else {
            printf("leao\n");
        }
    } else if(mes == 8){
        if(dia <= 22){
            printf("leao\n");
        } else {
            printf("virgem\n");
        }
    } else if(mes == 9){
        if(dia <= 22){
            printf("virgem\n");
        } else {
            printf("libra\n");
        }
    } else if(mes == 10){
        if(dia <= 22){
            printf("libra\n");
        } else {
            printf("escorpiao\n");
        }
    } else if(mes == 11){
        if(dia <= 21){
            printf("escorpiao\n");
        } else {
            printf("sagitario\n");
        }
    } else if(mes == 12){
        if(dia <= 21){
            printf("sagitario\n");
        } else {
            printf("capricornio\n");
        }
    } else if(mes == 1){
        if(dia <= 19){
            printf("capricornio\n");
        } else {
            printf("aquario\n");
        }
    } else if(mes == 2){
        if(dia <= 18){
            printf("aquario\n");
        } else {
            printf("peixes\n");
        }
    } else {
        printf("peixes\n");
    }

    return 0;
}