#include <stdio.h>

int main () {

    int l, vel, maior;
    int i;

    while(scanf("%d", &l) != EOF){

        maior = 0;

        for(i = 0; i < l; i++){
            scanf("%d", &vel);

            if(vel > maior){
                maior = vel;
            }
        }

        if(maior < 10){
            printf("1\n");
        } else if(maior >= 10 && maior < 20){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}