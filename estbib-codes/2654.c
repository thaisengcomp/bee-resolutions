#include <stdio.h>
#include <string.h>

typedef struct {
    int poder, kill, morte;
    char nome[101];
} Deuses;

void ordena_p(Deuses deuses[100], int n){//ordena decrescente
    int i, j;
    Deuses aux;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(deuses[i].poder < deuses[j].poder){
                aux = deuses[i];
                deuses[i] = deuses[j];
                deuses[j] = aux;
            } else if(deuses[i].poder == deuses[j].poder){
                        if(deuses[i].kill < deuses[j].kill){
                            aux = deuses[i];
                            deuses[i] = deuses[j];
                            deuses[j] = aux;
            } else if(deuses[i].kill == deuses[j].kill){
                        if(deuses[i].morte > deuses[j].morte){
                            aux = deuses[i];
                            deuses[i] = deuses[j];
                            deuses[j] = aux;   
            } else if(deuses[i].morte == deuses[j].morte){
                        if(strcmp(deuses[i].nome, deuses[j].nome) > 0){
                            aux = deuses[i];
                            deuses[i] = deuses[j];
                            deuses[j] = aux;
                        }   
                    }   
                }
            }
        }   
    }
}

int main () {

    Deuses deuses[100];
    int i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%s %d%d%d", deuses[i].nome, &deuses[i].poder, &deuses[i].kill, &deuses[i].morte);
    }

    ordena_p(deuses, n);

    printf("%s\n", deuses[0].nome);

    return 0;
}