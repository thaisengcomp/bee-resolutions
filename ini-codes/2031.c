#include <stdio.h>
#include <string.h>

int main () {

    int casos, i;
    char j1[7], j2[7];

    scanf("%d", &casos);

    for(i = 1; i <= casos; i++){
        getchar();
        scanf("%s", j1);
        scanf("%s", j2);

        if(strcmp(j1, j2) == 0){
            if(strcmp(j1, "papel") == 0){
                printf("Ambos venceram\n");
            } else if(strcmp(j1, "pedra") == 0){
                printf("Sem ganhador\n");
            } else if(strcmp(j1, "ataque") == 0){
                printf("Aniquilacao mutua\n");
            }
        } else if(strcmp(j1, "papel") == 0){
            if(strcmp(j2, "ataque") == 0){
                printf("Jogador 2 venceu\n");
            } else if(strcmp(j2, "pedra") == 0){
                printf("Jogador 2 venceu\n");
            }
        } else if(strcmp(j1, "ataque") == 0){
            if(strcmp(j2, "papel") == 0){
                printf("Jogador 1 venceu\n");
            } else if(strcmp(j2, "pedra") == 0){
                printf("Jogador 1 venceu\n");
            }
        } else if(strcmp(j1, "pedra") == 0){
            if(strcmp(j2, "ataque") == 0){
                printf("Jogador 2 venceu\n");
            } else if(strcmp(j2, "papel") == 0){
                printf("Jogador 1 venceu\n");
            }
        }
    }

    return 0;
}