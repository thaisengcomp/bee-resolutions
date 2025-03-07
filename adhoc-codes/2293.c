#include <stdio.h>

int main () {

    int matriz[100][100];
    int col[100] = {0}, lin[100] = {0};
    int i, j, maior=0, m, n;

    scanf("%d%d", &n, &m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<n; i++){//soma linhas
        for(j=0; j<m; j++){
            lin[i] += matriz[i][j];
        }
        if(lin[i]>maior){
            maior = lin[i];
        }
    }

    for(j=0; j<m; j++){//soma colunas
        for(i=0; i<n; i++){
            col[j] += matriz[i][j];
        }
        if(col[j]>maior){
            maior = col[j];
        }        
    }

    printf("%d\n", maior);

    return 0;
}