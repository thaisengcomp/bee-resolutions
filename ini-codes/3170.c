#include <stdio.h>

int main () {

    int bolinhas, galhos;

    scanf("%d%d", &bolinhas, &galhos);

    if(galhos/2 > bolinhas){
        printf("Faltam %d bolinha(s)\n", (galhos/2)-bolinhas);
    } else {
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}