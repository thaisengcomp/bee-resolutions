#include <stdio.h>

int main () {

    int i, j, x, im = 0, pr = 0;
    int par[5], impar[5];

    for(i = 0; i < 15; i++){
        scanf("%d", &x);

        if((x % 2) == 0){
            par[pr] = x;
            pr += 1;

            if(pr == 5){
                for(j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                pr = 0;
            }
        } else {
            impar[im] = x;
            im += 1;

            if(im == 5){
                for(j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                im = 0;
            }
        }
    }

    for(i = 0; i < im; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for(i = 0; i < pr; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}