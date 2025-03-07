#include <stdio.h>
#include <string.h>

typedef struct{
    char cor[9];
    char tam;
    char nome[101];
} Camisetas;

void ordena(Camisetas lista[60], int n){
    int i, j;
    Camisetas aux;

    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(strcmp(lista[i].cor, lista[j].cor) > 0){
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            } else if(strcmp(lista[i].cor, lista[j].cor) == 0){
                if(lista[i].tam < lista[j].tam){
                    aux = lista[i];
                    lista[i] = lista[j];
                    lista[j] = aux;
                } else if(lista[i].tam == lista[j].tam){
                    if(strcmp(lista[i].nome, lista[j].nome) > 0){
                        aux = lista[i];
                        lista[i] = lista[j];
                        lista[j] = aux;
                    }
                }
            }
        }
    }
}

int main () {

    int i, j, n;
    Camisetas lista[60];
    int primeiro = 1;

    scanf("%d", &n);

    while(n != 0){

        if(primeiro){
            primeiro = 0;
        } else {
            printf("\n");
        }

        for(i=0; i<n; i++){
            getchar();
            scanf("%[^\n]", lista[i].nome);
            getchar();
            scanf("%s %c", lista[i].cor, &lista[i].tam);
        }

        ordena(lista, n);

        for(i=0; i<n; i++){
            printf("%s %c %s\n", lista[i].cor, lista[i].tam, lista[i].nome);
        }

        scanf("%d", &n);
    }

    return 0;
}