#include <stdio.h>

void ordenaDecrescente(int alunos[1001], int n_alunos){
    int i, j, aux;
    for(i=0; i<n_alunos-1; i++){
        for(j=i+1; j<n_alunos; j++){
            if(alunos[i] < alunos[j]){
                aux = alunos[j];
                alunos[j] = alunos[i];
                alunos[i] = aux;
            }
        }
    }
}

int main () {

    int testes, n_alunos;
    int i;

    scanf("%d", &testes);

    while(testes){

        int count = 0;
        int alunos[1001] = {0};
        int ordenacao[1001] = {0};

        scanf("%d", &n_alunos);

        for(i = 0; i < n_alunos; i++){
            scanf("%d", &alunos[i]);
            ordenacao[i] = alunos[i];
        }

        ordenaDecrescente(ordenacao, n_alunos);

        for(i = 0; i < n_alunos; i++){
            if(ordenacao[i] != alunos[i]){
                count++;
            }
        }

        printf("%d\n", n_alunos - count);

        testes--;
    }

    return 0;
}