#include<stdio.h>

int main (){

    double a, b, c, temporaria;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a > b && a > c){
        a = a;
        if(b > c){
            b = b;
        } else {
            temporaria = c;
            c = b;
            b = temporaria;
        }
    } else if (b > a && b > c){
        temporaria = a;
        a = b;
        if(temporaria > c){
            b = temporaria;            
        } else {
            b = c;
            c = temporaria;
        }
    } else if (c > a && c > b){
        temporaria = a;
        a = c;
        if(temporaria > b){
            c = b;
            b = temporaria;
        } else {
            b = b;
            c = temporaria;
        }
    }

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if(a*a == ((b*b) + (c*c))){
            printf("TRIANGULO RETANGULO\n");
        } if (a*a > ((b*b) + (c*c))){
            printf("TRIANGULO OBTUSANGULO\n");
        } if (a*a < ((b*b) + (c*c))){
            printf("TRIANGULO ACUTANGULO\n");
        } if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } if ((a == b && b != c) || (a == c && c != b) || (b == c && c !=a)){
            printf("TRIANGULO ISOSCELES\n");
        }       
    }

    return 0;
}