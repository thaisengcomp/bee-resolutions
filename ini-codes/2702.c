#include<stdio.h>

int main (){

    //quantidade de frango, quantidade de bife e quantidade de massa disponivei
    int qtdf, qtdb, qtdm;
    int frango, bife, massa, passageiros;
    
    scanf("%d %d %d", &qtdf, &qtdb, &qtdm);
    scanf("%d %d %d", &frango, &bife, &massa);

    passageiros = 0;

    if (qtdf < frango){
    passageiros += (frango - qtdf);
    }

    if(qtdb < bife){
    passageiros += (bife - qtdb);
    }

    if(qtdm < massa){
    passageiros += (massa - qtdm);
    }

    printf("%d\n", passageiros);

    return 0;
}