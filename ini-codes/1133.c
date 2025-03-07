#include <stdio.h>

void crescente(int *x, int *y){
    int temp;
    if(*x > *y) {temp = *x; *x = *y; *y = temp;}
}

int main () {

    int x, y;

    scanf("%d %d", &x, &y);

    crescente(&x, &y);

    x++;

    while(x < y){
        if(((x % 5) == 2 ) ||
        ((x % 5) == 3)){
            printf("%d\n", x);
        }
        x++;
    }

    return 0;
}