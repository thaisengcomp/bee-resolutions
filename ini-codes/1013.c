#include <stdio.h>
#include <stdlib.h>

    //abs é funcao de outra biblioteca, formula exige o uso!!

    int main(){

        int a, b, c, maiorab, maiorc;

        scanf("%d %d %d", &a, &b, &c);

        maiorab = (a + b + abs (a - b)) / 2;
        maiorc = (maiorab + c + abs (maiorab - c)) / 2;

        if(maiorab > maiorc){
            printf("%d eh o maior\n", maiorab);
        } else {
            printf("%d eh o maior\n", maiorc);
        }

        return 0;
    }