#include <stdio.h>

int main () {

    int saida, tempo, fuso, total;

    scanf("%d %d %d", &saida, &tempo, &fuso);

    total = saida + tempo + fuso;

    if(total >= 24){
        printf("%d\n", total-24);
    } else if(total < 0){
        printf("%d\n", total+24);
    } else {
        printf("%d\n", total);
    }

    return 0;
}