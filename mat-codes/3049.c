#include<stdio.h>

    int main (){

        //a area total equivale a 11.200, logo sua metade eh 5.600
        //usar else if diretamente sem quebra de linha vai te ajudar
        int base, topo, area;

        scanf("%d", &base);
        scanf("%d", &topo);

        area = ((base + topo) * 70) / 2;

        if (area == 5600){
            printf("0\n");
        } else if (area > 5600){
            printf("1\n");
        } else if (area < 5600){
            printf("2\n");
        }

        return 0;
    }