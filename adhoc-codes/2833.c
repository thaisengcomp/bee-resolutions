#include <stdio.h>

int main() {
    int vet[16], i, posLu, posKung;

    for(i = 0; i < 16; i++) {
        scanf("%d", &vet[i]);
        if(vet[i] == 1) {
            posKung = i;
        } else if(vet[i] == 9) {
            posLu = i;
        }
    }

    if(posLu / 8 != posKung / 8) {
        printf("final\n");
    } else if(posLu / 4 != posKung / 4) {
        printf("semifinal\n");
    } else if(posLu / 2 != posKung / 2) {
        printf("quartas\n");
    } else {
        printf("oitavas\n");
    }

    return 0;
}
