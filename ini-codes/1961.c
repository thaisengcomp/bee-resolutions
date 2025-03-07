#include <stdio.h>
#include <stdlib.h>

int main () {

    int p, n, i, normal = 0;
    int qtd_pulos[100], distancia[100];

    scanf("%d %d", &p, &n);

    for(i = 0; i < n; i++){
        scanf("%d", &qtd_pulos[i]);
    }

    for(i = 0; i < n; i++){
        distancia[i] = abs(qtd_pulos[i + 1] - qtd_pulos[i]);
        if(distancia[i] <= p){
            normal += 1;
        }
    }

    n -= 1;

    if(normal < n){
        printf("GAME OVER\n");
    } else {
        printf("YOU WIN\n");
    }

    return 0;
}