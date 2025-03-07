#include <stdio.h>
#include <string.h>

int main () {

    char linha[1002];
    int frequencia[60];
    int i, maior;
    char r;

    while(scanf("%s", linha) != EOF){
        getchar();

        maior = 0;

        for(i=0; i<60; i++){
            frequencia[i] = 0;
        }

        for(i=0; linha[i] != '\0'; i++){
            frequencia[linha[i]]++;
        }

        for(i=0; i<60; i++){
            if(frequencia[i] >= maior){
                maior = frequencia[i];
                r = i;
            }
        }

        printf("%c\n", r);

    }

    return 0;
}