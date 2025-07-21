#include <stdio.h>

int main () {

    int a, b, j1, j2, testes, i;

    scanf("%d", &testes);

    while(testes != 0){

        j1 = 0;
        j2 = 0;

        for(i = 1; i <= testes; i++){
            scanf("%d %d", &a, &b);

            if(a > b){
                j1++;
            }

            if(a < b){
                j2++;
            }
        }

        printf("%d %d\n", j1, j2);

        scanf("%d", &testes);
    }

    return 0;
}