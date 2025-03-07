#include <stdio.h>

int main () {

    int d, n, qtd, i;
    double perc;

    scanf("%d %d", &d, &n);

    for(i=1; i <= 9; i++){
        perc = i * 0.1;
        qtd = (d * n * perc + 0.9999);
        if(i < 9){
            printf("%d ", qtd);
        } else {
            printf("%d\n", qtd);
        }
    }

    return 0;
}