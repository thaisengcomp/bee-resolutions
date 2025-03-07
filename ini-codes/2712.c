#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {

    int n, i, j, letra, numero;
    char placa[101];

    scanf("%d", &n);

    for(i = 1; i <= n; i++){

        letra = 0;
        numero = 0;

        getchar();
        scanf("%[^\n]s", placa);

        if(strlen(placa) != 8){
            printf("FAILURE\n");
            continue;
        } 
        
        for(j = 0; j < 3; j++){
            if(isupper(placa[j]) != 0){
                letra++;
            } else {
                printf("FAILURE\n");
                break;
            }
        }

        if(placa[3] != '-'){
            printf("FAILURE\n");
            continue;
        }

        for(j = 4; j < 8; j++){
            if(isdigit(placa[j]) != 0){
                numero++;
            } else {
                printf("FAILURE\n");
                break;
            }
        }

        if(numero == 4 && letra == 3){
            if(placa[7] == '1' || placa[7] == '2'){
                printf("MONDAY\n");
            } else if(placa[7] == '3' || placa[7] == '4'){
                printf("TUESDAY\n");
            } else if(placa[7] == '5' || placa[7] == '6'){
                printf("WEDNESDAY\n");
            } else if(placa[7] == '7' || placa[7] == '8'){
                printf("THURSDAY\n");
            } else if(placa[7] == '9' || placa[7] == '0'){
                printf("FRIDAY\n");
            }
        }
    }

    return 0;
}