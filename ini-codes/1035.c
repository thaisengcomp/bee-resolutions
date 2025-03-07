#include<stdio.h>

int main (){

    int a, b, c, d, somaab, somacd;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    somaab = a + b;
    somacd = c + d;

    if(b > c && d > a && somacd > somaab && c > 0 && d > 0 && a % 2 == 0){
        printf("Valores aceitos\n");
                }
     else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}