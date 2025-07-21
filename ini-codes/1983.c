#include <stdio.h>

int main () {

    int mat, i, testes, esc;
    double nota, maior = 0;

    scanf("%d", &testes);

    for(i = 1; i <= testes; i++){
        scanf("%d %lf", &mat, &nota);
        if(nota > maior){
            maior = nota;
            esc = mat;
        }
    }

    if(maior < 8.0){
        printf("Minimum note not reached\n");
    } else {
        printf("%d\n", esc);
    }

    return 0;
}