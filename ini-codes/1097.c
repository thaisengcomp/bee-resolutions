#include <stdio.h>

int main () {

    int i, j, I, menos_dois;

    I = 1;
    j = 7;

    for(i = 1; i <= 5; i++){

        menos_dois = j - 2;

        printf("I=%d J=%d\n", I, j);

            while(j > menos_dois){
                j -= 1;
                printf("I=%d J=%d\n", I, j);
            }
        I += 2;
        j += 4;
    
    }

    return 0;
}