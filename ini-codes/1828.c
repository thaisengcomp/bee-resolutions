#include <stdio.h>
#include <string.h>

int main () {

    int casos = 1, n_testes;
    int raj[8], sheldon[8];

    scanf("%d", &n_testes);

    while(casos <= n_testes){
        getchar();

        scanf("%s %s", sheldon, raj);

        if(strcmp(sheldon, raj) == 0){
            printf("Caso #%d: De novo!\n", casos);
        } else if(strcmp(sheldon, "tesoura") == 0){
            if(strcmp(raj, "papel") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else if(strcmp(raj, "lagarto") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", casos);
            }
        } else if(strcmp(sheldon, "pedra") == 0){
            if(strcmp(raj, "lagarto") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else if(strcmp(raj, "tesoura") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", casos);
            }
        } else if(strcmp(sheldon, "lagarto") == 0){
            if(strcmp(raj, "Spock") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else if(strcmp(raj, "papel") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", casos);
            }
        } else if(strcmp(sheldon, "papel") == 0){
            if(strcmp(raj, "pedra") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else if(strcmp(raj, "Spock") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", casos);
            }
        } else if(strcmp(sheldon, "Spock") == 0){
            if(strcmp(raj, "tesoura") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else if(strcmp(raj, "pedra") == 0){
                printf("Caso #%d: Bazinga!\n", casos);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", casos);
            }
        }

        casos++;
    }

    return 0;
}