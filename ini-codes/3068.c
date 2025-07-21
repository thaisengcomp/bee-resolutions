#include <stdio.h>

int main () {

    int min_x1, max_y1, max_x2, min_y2;
    int x, y, testes = 1, count, met, i;

    scanf("%d %d %d %d", &min_x1, &max_y1, &max_x2, &min_y2);


    /* enquanto pelo menos um dos valores for diferente de zero o programa roda */
    while(min_x1 || max_y1 || max_x2 || min_y2){

        count = 0;

        scanf("%d", &met);

        for(i = 1; i <= met; i++){
            scanf("%d %d", &x, &y);
            if((x <= max_x2) && (x >= min_x1) && (y <= max_y1) && (y >= min_y2)){
                count++;
            }
        }

        printf("Teste %d\n", testes);
        printf("%d\n", count);

        testes++;

        scanf("%d %d %d %d", &min_x1, &max_y1, &max_x2, &min_y2);
    }

    return 0;
}