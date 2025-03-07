#include <stdio.h>
#include <string.h>

int main () {

    char palavra[21];
    int n, j, i;

    scanf("%d", &n);
    getchar();

    for(i = 0; i < n; i++){
        scanf("%s", palavra);
        if((strlen(palavra) == 3) && (((palavra[0] == 'O') && (palavra[1] == 'B')) ||
        ((palavra[0] == 'U') && (palavra[1] == 'R')))){
            palavra[2] = 'I';
        }
        if(i == n-1){
            printf("%s\n", palavra);
        } else {
            printf("%s ", palavra);
        }
    }    

    return 0;
}