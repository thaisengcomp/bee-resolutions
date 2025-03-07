#include<stdio.h>

int main () {

    int h, i, n, maior;

    scanf("%d", &h);

    while(h != 0){

        maior = h;

        while(h > 1){
            if((h%2) == 0){
                h /= 2;
            } else {
                h = 3 * h + 1;
            }
            if(h > maior){
                maior = h;
            }
        }

        printf("%d\n", maior);

        scanf("%d", &h);
    }

    return 0;
}