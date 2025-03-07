#include<stdio.h>

    int main(){
        
        double m1, m2, m3, media;

        scanf("%lf", &m1);
        scanf("%lf", &m2);
        scanf("%lf", &m3);

        media = ((m1 * 2) + (m2 * 3) + (m3 * 5)) / 10;

        printf("MEDIA = %.1lf\n", media);

        return 0;
    }