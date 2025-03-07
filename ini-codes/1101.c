#include <stdio.h>

void crescente(int *a, int *b){
    int temp;
    if(*a > *b) {temp = *a; *a = *b; *b = temp;}
}

int main (){

    int m, n, soma, i;

    scanf("%d %d", &m, &n);

    while(m > 0 && n > 0){

        crescente(&m, &n);

        soma = 0;
        
        for(i = m; i <= n; i++){
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);

        scanf("%d %d", &m, &n);

    }

    return 0;
}