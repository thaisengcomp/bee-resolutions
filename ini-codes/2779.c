#include <stdio.h>

int main () {

    int i, m, n, x, frequencia[301] = {0};
    int faltam, achadas, total;

    //n - total de figurinhas e espaços
    //m - figurinhas já compradas
    //x - numero da figurinha

    scanf("%d", &n);
    scanf("%d", &m);

    for(i = 1; i <= m; i++){
        scanf("%d", &x);
        frequencia[x] += 1;
    }

    achadas = 0;

    for(i = 1; i <= n; i++)
        if(frequencia[i] > 0)
            achadas++;
    
    total = n - achadas;
    printf("%d\n", total);    

    return 0;
}