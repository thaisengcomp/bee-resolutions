#include <stdio.h>

int main () {

    int n, x, i, maior;
    int f[101];

    scanf("%d", &n);

    for(i = 0; i < 101; i++){
        f[i] = 0;
    }

    for(i = 0; i < n; i++){
        scanf("%d", &x);
        f[x]++;
    }

    maior = 0;
    int nota;

    for(i = 0; i < 101; i++){
        if(f[i] >= maior){
            maior = f[i];
            nota = i;
        }
    }

    printf("%d\n", nota);

    return 0;
}