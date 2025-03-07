#include<stdio.h>

int main(){

    //per_2 de dois dias atrás, per_1 do dia anterior
    int per_2, per_1; 

    scanf("%d%d", &per_2, &per_1);

    if (per_2 > per_1 && per_1 >= 3 && per_1 <= 96){
        printf("minguante\n");
    } else if(per_1 < 2){
        printf("nova\n");
    } else if(per_2 < per_1 && per_1 < 96){
        printf("crescente\n");
    } else if (per_1 > 96){
        printf("cheia\n");
    } else {}
    
    return 0;
}