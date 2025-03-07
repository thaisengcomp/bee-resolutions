#include <stdio.h>

int main () {

    int i, positivo;
    float x;

    for(i = 1; i <= 6; i++){
        scanf("%f", &x);

        if(x > 0){
            positivo += 1;
        }
    }

    printf("%d valores positivos\n", positivo);

    return 0;
}