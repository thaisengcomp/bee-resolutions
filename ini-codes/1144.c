#include <stdio.h>

int main () {

    int n, i, quadrado, cubo;
    int q2, c2;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        quadrado = i * i;
        cubo = i * i * i;

        printf("%d %d %d\n", i, quadrado, cubo);

        q2 = quadrado + 1;
        c2 = cubo + 1;
        printf("%d %d %d\n", i, q2, c2);
    }

    return 0;
}