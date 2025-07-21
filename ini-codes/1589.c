#include <stdio.h>

int main () {

    int r1, r2, casos;

    scanf("%d", &casos);

    while(casos > 0){
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1+r2);
        casos--;
    }

    return 0;
}