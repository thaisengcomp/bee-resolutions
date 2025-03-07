#include <stdio.h>

int main () {

    //tipo 1 (vertebrado ou invertebrado)
    //tipo 2 (ave, mamifero, inseto, anelideo)
    //tipo 3 (carnivoro etc)
    char tipo_1[50], tipo_2[50], tipo_3[50];

    scanf("%s", tipo_1);
    scanf("%s", tipo_2);
    scanf("%s", tipo_3);

    if(strcmp(tipo_1, "vertebrado") == 0){
        if(strcmp(tipo_2, "ave") == 0){
            if(strcmp(tipo_3, "carnivoro") == 0){
                printf("aguia\n");
            } else if(strcmp(tipo_3, "onivoro") == 0){
                printf("pomba\n");
            }
        
        } else if(strcmp(tipo_2, "mamifero") == 0){
            if(strcmp(tipo_3, "onivoro") == 0){
                printf("homem\n");
            } else if(strcmp(tipo_3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    
    } else if(strcmp(tipo_1, "invertebrado") == 0){
        if(strcmp(tipo_2, "inseto") == 0){
            if(strcmp(tipo_3, "hematofago") == 0){
                printf("pulga\n");
            } else if(strcmp(tipo_3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        } else if(strcmp(tipo_2, "anelideo") == 0){
            if(strcmp(tipo_3, "hematofago") == 0){
                printf("sanguessuga\n");
            } else if(strcmp(tipo_3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}