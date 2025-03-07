#include <stdio.h>

int main () {

    int marcacao[5];
    int n_questoes, preto, i, j;

    scanf("%d", &n_questoes);

    while(n_questoes != 0) {

        for(i = 0; i < n_questoes; i++){

            preto = 0;

            for(j = 0; j < 5; j++){

                scanf("%d", &marcacao[j]);

                if(marcacao[j] <= 127){
                    preto += 1;
                }

            }
                if(preto > 1 || preto == 0){
                    printf("*\n");
                } else if (marcacao[0] <= 127){
                    printf("A\n");
                } else if (marcacao[1] <= 127){
                    printf("B\n");
                }else if (marcacao[2] <= 127){
                    printf("C\n");
                }else if (marcacao[3] <= 127){
                    printf("D\n");
                }else if (marcacao[4] <= 127){
                    printf("E\n");
                }
        }

        scanf("%d", &n_questoes);
    }

    return 0;
}