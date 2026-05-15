#include <stdio.h>

int main () {

    int n, m;
    int menor, maior;
    int soma;

    scanf("%d%d", &n, &m);

    while(n > 0 && m > 0){

            soma = 0;

            if(n > m){
                maior = n;
                menor = m;
            } else if(m > n){
                maior = m;
                menor = n;
            } else {
                menor = n;
                maior = m;
            }

            for(int i = menor; i <= maior; i++){
                printf("%d ", i);
                soma += i;
            }

            printf("Sum=%d\n", soma);

            scanf("%d%d", &n, &m);
    }

    return 0;
}
