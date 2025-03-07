#include <stdio.h>
#include <string.h>

int main () {

    int n, i, r, maior;
    char texto[50][51];
    int primeiro = 1;

    scanf("%d", &n);

    while(n != 0){
        getchar();

        if(primeiro){
            primeiro = 0;
        } else {
            printf("\n");
        }

        maior = 0;

        for(i=0; i<n; i++){
            scanf("%s", texto[i]);
            if(strlen(texto[i]) > maior){
                maior = strlen(texto[i]);
            }
        }

        for(i=0; i<n; i++){
            r = strlen(texto[i]);
            while(r < maior){
                printf(" ");
                r++;
            }

            printf("%s\n", texto[i]);
            
        }
        
        scanf("%d", &n);

    }

    return 0;
}