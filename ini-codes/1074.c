#include <stdio.h>

int main () {

    int n_testes, x, i;

    scanf("%d", &n_testes);

    for(i = 1; i <= n_testes; i++){
        scanf("%d", &x);

        if(x == 0){
            printf("NULL\n");
            
        } else if((x % 2) == 0){
            if(x > 0){
            printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }

        } else if ((x % 2) != 0){
            if(x > 0){
            printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
    }

    return 0;
}