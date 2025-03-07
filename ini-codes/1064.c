#include<stdio.h>

int main (){

    float r, media, media_total;
    int positivos, i;

    media = 0;
    positivos = 0;

    for(i = 1; i <= 6; i++){
        scanf("%f", &r);
        if(r > 0){
            positivos += 1;
            media += r;
        }
        media_total = media / positivos;
    }

    printf("%d valores positivos\n", positivos);
    printf("%.1f\n", media_total);

    return 0;
}