#include <stdio.h>

/*funcao para contar caracteres, como a strlen
da biblioteca <string.h>*/
int caracteres(char str[]){
    int i, qtd = 0;
    for(i = 0; str[i] != '\0'; i++){
        qtd++;
    }
    return qtd;
}

int main () {

    char str[10001];
    int i;
    double res;

    scanf("%d", &i);

    while(i > 0){
        scanf(" %s", str);//o espaco antes do %s tira a necessidade do getchar
        res = caracteres(str) * 0.01; //abordagem direta para o cálculo do tempo
        printf("%.2lf\n", res);
        i--;
    }

    return 0;
}