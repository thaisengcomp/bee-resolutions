#include <stdio.h>

int main () {

    int i, j, I;

    I = 1;

    for(i = 1; i <= 5; i++){

        j = 7;

        printf("I=%d J=%d\n", I, j);

            while(j > 5){
                j -= 1;
                printf("I=%d J=%d\n", I, j);
            }
        I += 2;         
    }

    return 0;
}