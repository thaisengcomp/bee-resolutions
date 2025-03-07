#include <stdio.h>

int main () {

    int grenais = 1, empate = 0, inter = 0, gremio = 0, gols_inter, gols_gremio, ng;

    do {
        scanf("%d %d", &gols_inter, &gols_gremio);

        if(gols_inter > gols_gremio){
            inter += 1;
        } else if(gols_gremio > gols_inter){
            gremio += 1;
        } else {
            empate += 1;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &ng);

        while(ng != 1 && ng != 2){
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &ng);
        }

        if(ng == 1){
            grenais += 1;
        }

    } while (ng == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);

    if(inter > gremio){
        printf("Inter venceu mais\n");
    } else if(inter < gremio){
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}