#include <stdio.h>
#include <string.h>

int main () {

    int n, k, i,j; //k - colunas
    char nomes[100][21], aux[21];

    scanf("%d%d", &n, &k);
    getchar();

    for(i = 0; i < n; i++){
        scanf("%s", nomes[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(strcmp(nomes[i], nomes[j]) < 0){
                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[i]);
                strcpy(nomes[i], aux);
            }
        }
    }

    printf("%s\n", nomes[k-1]);

    return 0;
}