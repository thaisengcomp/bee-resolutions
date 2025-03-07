#include<stdio.h>

int main () {

    int primeiro_conector[5], segundo_conector[5];
    int i, sim = 0;

    for(i = 0; i < 5; i++){
        scanf("%d", &primeiro_conector[i]);
    }

    for(i = 0; i < 5; i++){
        scanf("%d", &segundo_conector[i]);
    }

    if(primeiro_conector[0] != segundo_conector[0]){
        sim += 1;
    }
    if(primeiro_conector[1] != segundo_conector[1]){
        sim += 1;
    }
    if(primeiro_conector[2] != segundo_conector[2]){
        sim += 1;
    }
    if(primeiro_conector[3] != segundo_conector[3]){
        sim += 1;
    }
    if(primeiro_conector[4] != segundo_conector[4]){
        sim += 1;
    }

    if(sim != 5){
        printf("N\n");
    } else {
        printf("Y\n");
    }

    return 0;
}