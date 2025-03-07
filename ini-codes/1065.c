#include <stdio.h>

int main () {

    int n1, n2, n3, n4, n5;
    int par = 0;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    if((n1 % 2) == 0){
        par += 1;
    }
    if((n2 % 2) == 0){
        par += 1;
    }
    if((n3 % 2) == 0){
        par += 1;
    }
    if((n4 % 2) == 0){
        par += 1;
    }
    if((n5 % 2) == 0){
        par += 1;
    }

    printf("%d valores pares\n", par);

    return 0;
}