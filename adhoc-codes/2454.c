#include<stdio.h>

//o objetivo eh determinar o número de pontos feitos em determinado caminho

int main(){

    int p, r;

    scanf("%d %d", &p, &r);

    if(p == 0){
        printf("C\n");
    } else if (p == 1 && r == 1){
        printf("A\n");
    } else if (p == 1 && r == 0){
        printf("B\n");
    } else {
        printf("C\n");
    }

    return 0;
}