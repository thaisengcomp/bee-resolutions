#include <stdio.h>

int main () {

    int x, impar = 0;

    scanf("%d", &x);

    while(impar < 6){

        if((x % 2) != 0){

            impar += 1;
            printf("%d\n", x);
        }

        x++;
    }

    return 0;
}