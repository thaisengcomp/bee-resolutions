#include <stdio.h>

int main () {

    int n, p, k, i, contador;
    int f[101];

    scanf("%d %d", &n, &k);

    while(n != 0 && k != 0){

        contador = 0;

        for(i = 0; i < 100; i++){
            f[i] = 0;
        }

        for(i = 0; i < n; i++){
            scanf("%d", &p);
            f[p]++;
        }

        for(i = 0; i < 100; i++){
            if(f[i] >= k){
                contador+=1;
            }
        }

        printf("%d\n", contador);

        scanf("%d %d", &n, &k);
    }

    return 0;
}