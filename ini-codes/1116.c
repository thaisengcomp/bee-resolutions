#include <stdio.h>

int main () {

    int i, testes;
    float x, y, div;

    scanf("%d", &testes);

    for(i = 1; i <= testes; i++){

        scanf("%f %f", &x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        } else {
            div = x / y;
            printf("%.1f\n", div);
        }
        
    }

    return 0;
}