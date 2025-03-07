#include <stdio.h>

int main () {

    int n_rankings, m_jogadores, seg;
    int i, j, jogador, frequencia[10001] = {0}, maior, segundomaior;

    scanf("%d %d", &n_rankings, &m_jogadores);

    while(m_jogadores != 0 && n_rankings != 0){

        for(i = 0; i < 10001; i++){
            frequencia[i] = 0;
        }

        maior = 0;
        segundomaior = 0;
        seg = 0;

        for(i = 0; i < n_rankings; i++){
            for(j = 0; j < m_jogadores; j++){
                scanf("%d", &jogador);
                frequencia[jogador]++;
            }
        }
        
        for(i = 0; i < 10001; i++){
            if(frequencia[i] > maior){
                segundomaior = maior;
                maior = frequencia[i];
            } else if (frequencia[i] > segundomaior && 
                        frequencia[i] < maior) {
                segundomaior = frequencia[i];
            }
            
        }

        for(i = 1; i < 10001; i++){
            if(frequencia[i] == segundomaior){
                printf("%d ", i);
                seg = 1;
            }
        }

        if(seg != 1){
            for(i = 1; i < 10001; i++){
                if(frequencia[i] > 0){
                    printf("%d ", i);
                }
            }
        }

        printf("\n");

        scanf("%d %d", &n_rankings, &m_jogadores);
    }

    return 0;
}