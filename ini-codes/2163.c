#include <stdio.h>

int main () {

    int matriz[1002][1002];
    int n, m;
    int i, j, x, y;

    scanf("%d%d", &n, &m);

    for(i=0; i<n+2; i++){
        for(j=0; j<m+2; j++){
            matriz[i][j] = 0;
        }
    }

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    x=0;
    y=0;

    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){

            if(matriz[i][j] == 42){

                if((matriz[i-1][j-1] == 7) &&
                   (matriz[i-1][j] == 7) &&
                   (matriz[i-1][j+1] == 7) &&
                   (matriz[i][j-1] == 7) &&
                   (matriz[i][j+1] == 7) &&
                   (matriz[i+1][j-1] == 7) &&
                   (matriz[i+1][j] == 7) &&
                   (matriz[i+1][j+1] == 7)){

                    x=i;
                    y=j;
                }
            }
        }

    }

    printf("%d %d\n", x, y);


    return 0;
}