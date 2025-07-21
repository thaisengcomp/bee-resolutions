#include <stdio.h>

int main () {

    int hora, minuto, estado;
    int i;

    scanf("%d", &i);

    while(i > 0){

        scanf("%d%d%d", &hora, &minuto, &estado);

        if(hora < 10){
            printf("0%d:", hora);
        } else {
            printf("%d:", hora);
        }

        if(minuto < 10){
            printf("0%d - ", minuto);
        } else {
            printf("%d - ", minuto);
        }

        if(estado == 1){
            printf("A porta abriu!\n");
        } else {
            printf("A porta fechou!\n");
        }

        i--;
    }

    return 0;
}