#include <stdio.h>
#include <string.h>

int main () {

    int i, j, r;
    char letra;
    char cifrado[27], codigo[10001], alfabeto_r[27];

    scanf("%s", cifrado);
    scanf("%s", codigo);

    letra = 'a';

    r = strlen(codigo);

    for(i=0; i<26; i++){
        alfabeto_r[i] = letra;
        letra++;
    }

    for(i=0; i<r; i++){
        for(j=0;j<26;j++){
            if(codigo[i] == cifrado[j]){
                printf("%c", alfabeto_r[j]);
            }
        }
    }

    printf("\n");

    return 0;
}