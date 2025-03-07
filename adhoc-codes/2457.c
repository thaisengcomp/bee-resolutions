#include <stdio.h>
#include <string.h>

int main () {

    int r, i, ja_verificado; //qtd de letra, espaco eh qtd de palavras, ja_verificado eh pra ver se eh a mesma palavra
    double perc, qtd = 0, espaco = 0;
    char texto[1002], letra;

    scanf("%c", &letra);
    getchar();
    scanf("%[^\n]s", texto);
        
    r = strlen(texto);

    for(i=0; i<r; i++){
        if(texto[i] == ' ' || texto[i] == '\0'){
            espaco++;
            ja_verificado = 0;
        }
        if(texto[i] == letra && ja_verificado == 0){
            qtd++;
            ja_verificado = 1;
        }
    }

    perc = (qtd/(espaco+1)) * 100;

    printf("%.1lf\n", perc);

    return 0;
}