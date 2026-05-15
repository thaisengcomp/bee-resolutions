#include <stdio.h>

int main () {

    int n, comp, qtd_v;
    int pares, retangulos;

    scanf("%d", &n);

    while(n != 0){

        pares = 0;

        for(int i = 1; i <= n; i++){
            scanf("%d%d", &comp, &qtd_v);
            pares += (qtd_v / 2);
        }

        retangulos = pares / 2;

        printf("%d\n", retangulos);

        scanf("%d", &n);
    }

    return 0;
}
