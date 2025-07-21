#include <stdio.h>
#include <string.h>

int main () {

    char produto[21], caractere;
    char lista[1001][21];
    int i, j, k, l, testes, ja_adicionado;

    scanf("%d", &testes);
    getchar();

    for(i = 0; i < testes; i++){

        j = 0;
        while(scanf("%s", produto)){
            caractere = getchar();

            ja_adicionado = 0;

            for(k = 0; k < j; k++){
                if(strcmp(lista[k], produto) == 0){
                    ja_adicionado = 1;
                    break;
                }
            }

            if(ja_adicionado == 0){
                strcpy(lista[j], produto);
                j++;
            }

            if(caractere == '\n'){
                break;
            }
        }

        for(k = 0; k < j-1; k++){
            for(l = k+1; l < j; l++){
                if(strcmp(lista[k],lista[l]) > 0){
                    strcpy(produto, lista[k]);
                    strcpy(lista[k], lista[l]);
                    strcpy(lista[l], produto);
                }
            }
        }

        for(k = 0; k < j; k++){
            printf("%s", lista[k]);

            if(k != (j-1)){
                printf(" ");
            }
        }

        printf("\n");
    }


    return 0;
}