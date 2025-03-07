#include <stdio.h>

int main (){

    float nota, media, media_final;
    int i;

    media = 0;

    for(i = 1; i <= 2; i++){
        scanf("%f", &nota);
        
        while(nota < 0 || nota > 10.0){
            printf("nota invalida\n");
            scanf("%f", &nota);
        }

        media += nota;

    }

    media_final = media / 2;
    printf("media = %.2f\n", media_final);

    return 0;
}