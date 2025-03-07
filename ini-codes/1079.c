#include <stdio.h>

int main (){

    int i, n;
    float v1, v2, v3, media;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%f %f %f", &v1, &v2, &v3);

        media = ((v1 * 2) + (v2 * 3) + (v3 * 5)) / 10;

        printf("%.1f\n", media);
    }

    return 0;
}