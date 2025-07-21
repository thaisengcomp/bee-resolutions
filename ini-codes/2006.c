#include<stdio.h>

int main () {

    int t, i, qtd = 0, part;

    scanf("%d", &t);

    for(i = 1; i <= 5; i++){
        scanf("%d", &part);
        if(part == t){
            qtd++;
        }
    }

    printf("%d\n", qtd);

    return 0;
}