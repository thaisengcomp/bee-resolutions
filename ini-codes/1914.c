#include <stdio.h>
#include <string.h>

int main () {

    int testes, n1, n2, soma;
    char jog1[101], jog2[101];
    char esc_jog1[6], esc_jog2[6];

    scanf("%d", &testes);

    while(testes > 0){

        scanf(" %s %s %s %s", jog1, esc_jog1, jog2, esc_jog2);
        scanf("%d %d", &n1, &n2);

        soma = n1+n2;

        if(soma%2 == 0){
            if(strcmp(esc_jog1, "PAR") == 0){
                printf("%s\n", jog1);
            } else if(strcmp(esc_jog2, "PAR") == 0){
                printf("%s\n", jog2);
            }
        } else {
            if(strcmp(esc_jog1, "IMPAR") == 0){
                printf("%s\n", jog1);
            } else if(strcmp(esc_jog2, "IMPAR") == 0){
                printf("%s\n", jog2);
            }
        }

        testes--;
    }

    return 0;
}