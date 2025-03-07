#include <stdio.h>
#include <string.h>

int main () {

    char frase[101], palavra[101], maior_s[101];
    int letras, i, maior = 0, j;

    while(scanf("%[^\n]", frase)){
        getchar();

        if(strcmp(frase, "0") == 0){
            break;
        }

        letras = 0;
        j = 0;

        for(i=0; i <= strlen(frase); i++){

            if(frase[i] == '0'){
                break;
            }

            if((frase[i] == ' ' || frase[i] == '\0')){
                palavra[j] = '\0';
                printf("%d", letras);

                if(frase[i] == ' '){
                    printf("-");
                }

                if(maior <= letras){
                    maior = letras;
                    strcpy(maior_s, palavra);
                }

                for(j=0; j<101; j++){
                    palavra[j]= '\0';
                }

                letras = 0;
                j=0;
                
            } else {
                letras++;
                palavra[j] = frase[i];
                j++;
            }
        }
        printf("\n");
    }    

    printf("\nThe biggest word: %s\n", maior_s);

    return 0;
}