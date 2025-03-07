#include <stdio.h>

int main () {

    int v1, v2;

    scanf("%d %d", &v1, &v2);

    while(v1 != v2){
        if(v1 > v2){
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }

        scanf("%d %d", &v1, &v2);
        
    }
    
    return 0;
}