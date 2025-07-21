#include <stdio.h>

int main () {

    int n[20];
    int i, j;

    for(i=0; i<20; i++){
        scanf("%d", &n[i]);
    }

    j = 19;
    
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i, n[j]);
        j--;
    }
    
    return 0;
}