#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char frase[5100];
    char letra, mesma_letra; //letra eh pra verificar a primeira, mesma_letra eh para modificar a contagem
    int ali, i;

    while(scanf(" %[^\n]", frase) != EOF){

        for(i=0; frase[i] != '\0'; i++){ //passa todas as letras para minusculas
            frase[i] = tolower(frase[i]);
        }

        letra = frase[0];
        ali = 0;
        mesma_letra = 0;

        for(i=0; frase[i] != '\0'; i++){
            if(frase[i] == ' '){
                if(isalpha(frase[i+1])){
                    if(frase[i+1] == letra && !mesma_letra){
                        ali++;
                        mesma_letra = 1;
                    } else if(frase[i+1] != letra){
                        mesma_letra = 0;
                        letra = frase[i+1];
                    }
                }
            }
        }
        printf("%d\n", ali);
    }

    return 0;
}