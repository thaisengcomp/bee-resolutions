#include <stdio.h>
#include <ctype.h>
#include <string.h>

void minus(char str[201]){
    int i, r;

    r=strlen(str);

    for(i=0; i<r; i++){
        if(isalpha(str[i])){
            str[i] = tolower(str[i]);
        }
    }
}

int main (){

    int n, i, j;
    char lista[201];
    int histograma[26], maior;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        maior = 0;
        getchar();
        scanf("%[^\n]", lista);

        for(j=0; j<26; j++){
            histograma[j] = 0;
        }

        minus(lista);

        for(j=0; j<strlen(lista); j++){
            if(isalpha(lista[j])){
                histograma[lista[j] - 'a']++;
            }
        }

        for(j=0; j<strlen(lista); j++){
            if(histograma[j] >= maior){
                maior = histograma[j];
            }
        }

        for(j=0; j<26; j++){
            if(histograma[j] == maior){
                printf("%c", 'a'+j);
            }
        }
        printf("\n");
    }

    return 0;
}