#include <stdio.h>

int main () {

    int n, i;
    char curso[2000][101];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf(" %[^\n]", curso[i]);//o espaco antes do % dispensa o uso de getchar
    }

    printf("Ciencia da Computacao\n");

    return 0;
}