#include <stdio.h>
#include <string.h>

int main () {

    int n_testes, k_pessoas, i, j, ingles;
    char idioma[21], lingua[21]; //lingua vai comparar se são diferentes

    scanf("%d", &n_testes);

    for(i = 1; i <= n_testes; i++){

        scanf("%d", &k_pessoas);
        getchar();
        ingles = 0;

        for(j = 1; j <= k_pessoas; j++){
            scanf("%s", idioma);
            if(j == 1){
                strcpy(lingua, idioma);
            } else {
                if(strcmp(lingua, idioma) != 0){
                    ingles++;
                }
            }
        }
        if(ingles < 1){
            printf("%s\n", idioma);
        } else {
            printf("ingles\n");
        }
    }

    return 0;
}