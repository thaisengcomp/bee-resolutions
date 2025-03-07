#include<stdio.h>

int main (){

    int c_vitorias, c_empates, c_gols;
    int f_vitorias, f_empates, f_gols;
    int cormengo, flaminthians; 

    scanf("%d %d %d", &c_vitorias, &c_empates, &c_gols);
    scanf("%d %d %d", &f_vitorias, &f_empates, &f_gols);

    cormengo = (c_vitorias * 3) + c_empates;
    flaminthians = (f_vitorias * 3) + f_empates;

    if(cormengo > flaminthians){
        printf("C\n");
    } else if(flaminthians > cormengo){
        printf("F\n");
    } else if(flaminthians == cormengo){
        if(c_gols > f_gols){
            printf("C\n");
        } else if (f_gols > c_gols){
            printf("F\n");
        } else if (f_gols == c_gols){
            printf("=\n");
        }
    }

    return 0;
}