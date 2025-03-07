#include <stdio.h>

int main (){

    int qtd_linhas, i;
    int n1, n2, n3;

    scanf("%d", &qtd_linhas);

    n1 = 1; n2 = 2; n3 = 3;

    for(i = 1; i <= qtd_linhas; i++){

        printf("%d %d %d PUM\n", n1, n2, n3);

        n1 = n3 + 2;
        n2 = n1 + 1;
        n3 = n2 + 1;
    }


    return 0;
}