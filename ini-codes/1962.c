#include <stdio.h>
#include <stdlib.h>

int main () {

    int atual = 2015;
    int testes, ano, ans;

    scanf("%d", &testes);

    while(testes > 0){

        scanf("%d", &ano);

        if(atual-ano < 1){
            ans = abs(atual-ano) + 1;
            printf("%d A.C.\n", ans);
        } else {
            ans = atual-ano;
            printf("%d D.C.\n", ans);
        }
        testes--;
    }

    return 0;
}