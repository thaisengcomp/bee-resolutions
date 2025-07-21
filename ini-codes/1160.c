#include <stdio.h>
#include <math.h>

int main () {

    int t, pa, pb, anos;
    double g1, g2;
    int i;

    scanf("%d", &t);

    for(i=0; i<t; i++){

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        g1/=100.0;
        g2/=100.0;

        anos = 0;

        while((pa <= pb) && anos <= 100){
            pa += floor(pa*g1); //floor arredonda para o número inteiro anterior (arredonda "para baixo")
            pb += floor(pb*g2);
            anos++;
        }

        if(anos <= 100){
            printf("%d anos.\n", anos);
        } else {
            printf("Mais de 1 seculo.\n");
        }
    }

    return 0;
}