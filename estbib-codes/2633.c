#include <stdio.h>

typedef struct{
    char pecas[21];
    int dias;
} Churras;

void ordenar(Churras churras[10], int n){

    int i, j;
    Churras aux;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(churras[i].dias > churras[j].dias){
                aux = churras[i];
                churras[i] = churras[j];
                churras[j] = aux;
            }
        }
    }
}

int main () {

    Churras churras[10];
    int n,i;

    while(scanf("%d", &n) != EOF){

        for(i=0; i<n; i++){
            scanf("%s %d", churras[i].pecas, &churras[i].dias);
        }

        ordenar(churras, n);

        for(i=0; i<n; i++){
            printf("%s", churras[i].pecas);
            if(i<n-1){
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}