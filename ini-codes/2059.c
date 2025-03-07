#include<stdio.h>

int main(){

    int p, jog1, jog2, roubo, acusacao;
    int divisao;

    scanf("%d %d %d %d %d", &p, &jog1, &jog2, &roubo, &acusacao);

    divisao = (jog1 + jog2) % 2;

    if(roubo == 1 && acusacao == 1){
        printf("Jogador 2 ganha!\n");
    } else if (roubo == 1 && acusacao == 0) {
        printf("Jogador 1 ganha!\n");
    } else if (roubo == 0 && acusacao == 1){
        printf("Jogador 1 ganha!\n");
    } else {
        if (p == 1 && divisao == 0){
            printf("Jogador 1 ganha!\n");
        } else if (p == 0 && divisao == 0){
            printf("Jogador 2 ganha!\n");
        } else if (p == 1 && divisao != 0){
            printf("Jogador 2 ganha!\n");
        } else if (p == 0 && divisao != 0){
            printf("Jogador 1 ganha!\n");
        }
    }

    return 0;
}