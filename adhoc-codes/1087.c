#include <stdio.h>
#include <stdlib.h>

int main () {

    int x1, y1, x2, y2;
    //subtracao coordenada, subtracao linha
    int sub_c, sub_l, mov;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while((x1 != 0) && (y1 != 0) && (x2 != 0) && (y2 != 0)){
        sub_c = abs(x2 - x1);
        sub_l = abs(y2 - y1);

        if((sub_c == 0) && (sub_l == 0)){
            mov = 0;
        }else if((sub_c == sub_l) ||
                (sub_c == 0) ||
                (sub_l == 0)){
            mov = 1;
        } else {
            mov = 2;
        }

        printf("%d\n", mov);

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    }

    return 0;
}