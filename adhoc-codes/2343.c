#include <stdio.h>

int main () {

    int matriz[501][501];//vai de 0 a 500, entao são 501 posicoes
    int i, j, ans = 0, x, y, n;

    scanf("%d", &n);

    for(i=0;i<501;i++){
        for(j=0;j<501;j++){
            matriz[i][j] = 0;
        }
    }

    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);

        if(matriz[x][y] == 1){
            printf("1\n");
            ans++;
            break;
        }

        matriz[x][y] = 1;
    }

    if(ans < 1){
        printf("0\n");
    }

    return 0;
}