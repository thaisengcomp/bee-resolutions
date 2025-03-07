#include <stdio.h>

int main () {

    int n, i, r[100];
    int queda = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &r[i]);
    }

    for(i = 0; i < n-1; i++){
        if(r[i + 1] < r[i]){
            i++;
            i++;
            printf("%d\n", i);
            queda += 1;
            break;
        }
    }

    if(queda == 0){
        printf("0\n");
    }

    return 0;
}