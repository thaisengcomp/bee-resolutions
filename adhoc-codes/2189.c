#include <stdio.h>

int main () {

    int i, j, n, n_convidados, ganhador, n_ganhador;

    scanf("%d", &n);

    j = 1;

    while(n != 0){

        ganhador = 0;

        for(i=1; i<=n; i++){
            scanf("%d", &n_convidados);
            if(n_convidados == i){
                ganhador += 1;
                n_ganhador = n_convidados;
            }
            if(ganhador > 1){
                continue;
            }
        }

        printf("Teste %d\n", j);
        printf("%d\n\n", n_ganhador);

        j++;
        scanf("%d", &n);
    }

    return 0;
}