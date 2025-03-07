#include<stdio.h>

int main(){

    char l1, l2, l3; //letra 1, 2 e 3

    scanf("%c%c%c", &l1, &l2, &l3);

    if(l1 == l3 && l1 != l2 && l2 == 'O'){
        printf("*\n");
    } else if (l1 == l2 && l2 == l3){
        printf("?\n");
    } else if (l1 == l2 && l2 == 'O'){
        printf("?\n");
    } else if (l2 == l3 && l2 == 'O'){
        printf("?\n");
    } else if (l1 == l2 && l2 == 'X'){
        printf("Alice\n");
    } else if (l2 == l3 && l2 == 'X'){
        printf("Alice\n");
    } else if (l1 == l3 && l1 == 'O'){
        printf("?\n");
    }

    return 0;
}