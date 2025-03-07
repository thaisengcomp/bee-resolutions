#include <stdio.h>

int main () {

    int digito1, digito2;
    int soma = 0, numero = 0;
    char cpf[12];

    while(scanf("%[^\n]s", cpf) != EOF){
        getchar();

        soma = 0;
        numero = 1;

        for(int i = 0; i < 9; i++){ //primeiro digito
            soma += ((cpf[i] - '0') * numero);
            numero++;
        }

        digito1 = soma % 11;
        if(digito1 == 10){
            digito1 = 0;
        }
        soma = 0;
        numero = 9;

        for(int i = 0; i < 9; i++){ //segundo digito
            soma += ((cpf[i] - '0') * numero);
            numero--;
        }

        digito2 = soma % 11;
        if(digito2 == 10){
            digito2 = 0;
        }

        for(int i = 0; i < 9; i++){
            if((i == 2) || (i == 5)){
                printf("%c.", cpf[i]);
            } else {
                printf("%c", cpf[i]);
            }
        }


        printf("-%d%d\n", digito1, digito2);

    }

    return 0;
}