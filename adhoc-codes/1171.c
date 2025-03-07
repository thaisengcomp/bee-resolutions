#include <stdio.h>

int main () {

    int testes, i, x; 
    int f[2001] = {0};

    scanf("%d", &testes);

    for(i = 0; i < testes; i++){
        scanf("%d", &x);
        f[x]++;
    }

    for(i = 1; i < 2001; i++){
        if(f[i] > 0){
        printf("%d aparece %d vez(es)\n", i, f[i]);
        }
    }


    return 0;
}