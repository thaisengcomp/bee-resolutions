#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char senha[10000];
    int tamanho;
    int i, invalido, numero, maius, minus;    
    
    while(scanf("%[^\n]s", senha) != EOF){
        getchar();
        senha[strcspn(senha, "\n")] = '\0';

        tamanho = (strlen(senha));

        invalido = 0;
        numero = 0;
        maius = 0; 
        minus = 0;

        if(tamanho < 6 || tamanho > 32){
            invalido += 1;
        }

        for(i=0; senha[i] != '\0'; i++){
            
            if(isalnum(senha[i]) == 0){
                invalido++;
            }

            if(islower(senha[i]) != 0){
                minus++;
            }

            if(isupper(senha[i]) != 0){
                maius++;
            }

            if(isdigit(senha[i]) != 0){
                numero++;
            }
        }
        if(invalido == 0 && minus >= 1 && maius >= 1 && numero >= 1){
            printf("Senha valida.\n");
        } else {
            printf("Senha invalida.\n");
        }
    }

    return 0;
}