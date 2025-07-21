#include <stdio.h>

int main () {

    int guarte, dabriel;
    int ataque, defesa, level;
    int i, testes, bonus;

    scanf("%d", &testes);

    while(testes > 0){

        scanf("%d", &bonus);

        guarte = 0;
        dabriel = 0;

        for(i = 1; i <= 2; i++){
            scanf("%d%d%d", &ataque, &defesa, &level);
            if(i == 1){
                dabriel = (ataque + defesa) / 2;
                if(level%2 == 0){
                    dabriel += bonus;
                }
            } else {
                guarte = (ataque + defesa) / 2;
                if(level%2 == 0){
                    guarte += bonus;
                }
            }
        }


        if(guarte == dabriel){
            printf("Empate\n");
        } else if(guarte > dabriel){
            printf("Guarte\n");
        } else {
            printf("Dabriel\n");
        }

        testes--;
    }

    return 0;
}