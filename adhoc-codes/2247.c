#include<stdio.h>

int main (){

    int n, j, z, i, diferenca, caso = 1;

    scanf("%d", &n);

    while(n != 0){

        printf("Teste %d\n", caso);

        caso += 1;
        diferenca = 0;

        for(i = 1; i <= n; i++){
            scanf("%d %d", &j, &z);

            diferenca += j - z;

            printf("%d\n", diferenca);
        }
        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}