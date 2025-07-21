#include <stdio.h>

int main () {

    int testes, cordx, cordy, x, y, i;

    scanf("%d", &testes);

    while(testes != 0){

        scanf("%d%d", &cordx, &cordy);

        for(i = 1; i <= testes; i++){

            scanf("%d%d", &x, &y);
            
            if(x == cordx || y == cordy){
                printf("divisa\n");
            } else if(x < cordx){
                if(y < cordy){
                    printf("SO\n");
                } else if(y > cordy){
                    printf("NO\n");
                }
            } else if(x > cordx){
                if(y < cordy){
                    printf("SE\n");
                } else if(y > cordy){
                    printf("NE\n");
                }
            }
        }

        scanf("%d", &testes);

    }

    return 0;
}