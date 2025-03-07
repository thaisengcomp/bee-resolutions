#include<stdio.h>

    int main(){

        unsigned int inteiro;
        int n100, n50, n20, n10, n5, n2, n1;

        scanf("%ud", &inteiro);
        printf("%d\n", inteiro);       

        n100 = inteiro / 100;
            inteiro %= 100;

        n50 = inteiro / 50;
            inteiro %= 50;

        n20 = inteiro / 20;
            inteiro %= 20;

        n10 = inteiro / 10;
            inteiro %= 10;

        n5 = inteiro / 5;
            inteiro %= 5;

        n2 = inteiro / 2;
            inteiro %= 2;

        n1 = inteiro / 1;
            inteiro %= 1;

        //o inteiro foi modificado, entao o printf deve ficar em cima da operação;

        printf("%d nota(s) de R$ 100,00\n", n100);
        printf("%d nota(s) de R$ 50,00\n", n50);
        printf("%d nota(s) de R$ 20,00\n", n20);
        printf("%d nota(s) de R$ 10,00\n", n10);
        printf("%d nota(s) de R$ 5,00\n", n5);
        printf("%d nota(s) de R$ 2,00\n", n2);
        printf("%d nota(s) de R$ 1,00\n", n1);

        return 0;
    }