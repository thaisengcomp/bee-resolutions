#include <stdio.h>

int main (){

    int mary, john, n, r, i;

    scanf("%d", &n);

    mary = 0;
    john = 0;

    for(i = 1; i <= n; i++){
        scanf("%d", &r);
        if(r == 0){
            mary += 1;
        } else if (r == 1){
            john += 1;
        }
    }

    printf("Mary won %d times and John won %d times\n", mary, john);

    return 0;
}