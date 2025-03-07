#include<stdio.h>

int main (){

    float n, x, y, total;

    scanf("%f %f %f", &n, &x, &y);

    total = n / (x+y);

    printf("%.2f\n", total);

    return 0;
}