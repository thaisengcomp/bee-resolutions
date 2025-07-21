#include <stdio.h>

int main() {

    double x;

    scanf("%lf", &x);

    printf("%+.4E\n", x);
    /*essa eh uma forma propria da linguagem C de fazer
    notacoes. o %+ imprime o sinal, sendo ele positivo ou negativo,
    o .4 sao as casas decimais (poderia ser .3, por ex), e o E eh
    para o expoente (poderia ser %e tambem).
    O %e direto não formata de acordo com o que o problema pede.*/

    return 0;
}

