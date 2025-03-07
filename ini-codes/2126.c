#include <stdio.h>
#include <string.h>   

int main (){

    char str1[12], str2[34];
    int i, j, k, seq = 0, nseq, casos = 1;
    int ts1, ts2;

    while(scanf("%s", str1) != EOF){
        getchar();
        scanf("%s", str2);

        ts1 = strlen(str1);
        ts2 = strlen(str2);
        seq = 0;

        for(i = 0; i < ts2; i++){
            if(str1[0] == str2[i]){
                k = i+1;
                j = 1;
                while(j < ts1 && k < ts2 && str1[j] == str2[k]){ //!= '\0' não deu certo no compilador
                    j++;
                    k++;
                }
                if(j == ts1){
                    seq++;
                    nseq = i+1;//onde comeca a ultima sequencia
                }
            }
        }

        if(seq < 1){
            printf("Caso #%d:\n", casos);
            printf("Nao existe subsequencia\n\n");
        } else {
            printf("Caso #%d:\n", casos);
            printf("Qtd.Subsequencias: %d\n", seq);
            printf("Pos: %d\n\n", nseq);
        }

        casos++;

    }

    return 0;
}