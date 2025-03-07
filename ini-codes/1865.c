#include<stdio.h>
#include<string.h>

int main (){

    int forca, casos, i;
    char nome[500];

    scanf("%d", &casos);

    for(i=0; i<casos; i++){
        scanf("%s", nome);
        scanf("%d", &forca);
        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}