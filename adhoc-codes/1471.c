#include <stdio.h>

int main () {

    int n, r, i;
    int volta, freq[10001];

    while(scanf("%d %d", &n, &r)!= EOF){

        for(i = 0; i < 10001; i++){
            freq[i] = 0;
        }

        for(i = 1; i <= r; i++){
            scanf("%d", &volta);
            freq[volta]++;
        }

        if(n == r){
            printf("*");
        } else {
            for(i=1; i <= n; i++){
                if(freq[i] == 0){
                    printf("%d ", i);
                }
            }
        }

        printf("\n");
    }

    return 0;
}