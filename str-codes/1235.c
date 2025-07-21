#include <stdio.h>
#include <string.h>

int main () {

    char sentenca[101], primeira_metade[101], segunda_metade[101];
    int i, j, testes;
    int tamanho;

    scanf("%d", &testes);
    getchar();

    while(testes > 0){

        scanf("%[^\n]", sentenca);
        getchar();

        tamanho = strlen(sentenca);

        j = 0;
        for(i = (tamanho / 2) - 1; i >= 0; i--){
            primeira_metade[j] = sentenca[i];
            j++;
        }
        primeira_metade[j] = '\0';

        j = 0;
        for(i = tamanho - 1; i >= (tamanho / 2); i--){
            segunda_metade[j] = sentenca[i];
            j++;
        }
        segunda_metade[j] = '\0';

        printf("%s%s\n", primeira_metade, segunda_metade);

        testes--;
    }

    return 0;
}