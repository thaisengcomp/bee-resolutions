#include<stdio.h>

int main (){

    int numero, horas;
    double salario_hora, salario_total;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &salario_hora);

    salario_total = horas * salario_hora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario_total);

    return 0;
}