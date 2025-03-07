#include <stdio.h>
#include <string.h>

int main () {

    char tipo1[22], tipo2[22];
    int r1, r2, i;

    scanf("%s", tipo1);
    getchar();
    scanf("%s", tipo2);

    r1 = strlen(tipo1);
    r2 = strlen(tipo2);

    if(r1 == r2){
        for(i = 0; i < r1; i++){
            if(tipo1[i] < tipo2[i]){
                printf("%s\n", tipo1);
                printf("%s\n", tipo2);
                break;
            } else if(tipo1[i] > tipo2[i]){
                printf("%s\n", tipo2);
                printf("%s\n", tipo1);
                break;
            } else {
                while(tipo1[i] == tipo2[i]){
                    if(tipo1[i + 1] > tipo2[i + 1]){
                        printf("%s\n", tipo2);
                        printf("%s\n", tipo1);
                        break;
                    } else if(tipo1[i + 1] < tipo2[i + 1]){
                        printf("%s\n", tipo1);
                        printf("%s\n", tipo2);
                        break;
                    }
                    i++;
                }
            }
        }
    } else if(r1 > r2){
        for(i = 0; i < r2; i++){
            if(tipo1[i] < tipo2[i]){
                printf("%s\n", tipo1);
                printf("%s\n", tipo2);
                break;
            } else if(tipo1[i] > tipo2[i]){
                printf("%s\n", tipo2);
                printf("%s\n", tipo1);
                break;
            } else {
                while(tipo1[i] == tipo2[i]){
                    if(tipo1[i + 1] > tipo2[i + 1]){
                        printf("%s\n", tipo2);
                        printf("%s\n", tipo1);
                        break;
                    } else if(tipo1[i + 1] < tipo2[i + 1]){
                        printf("%s\n", tipo1);
                        printf("%s\n", tipo2);
                        break;
                    }
                    i++;
                }
            }
        }
    } else if(r1 < r2){
        for(i = 0; i < r1; i++){
            if(tipo1[i] < tipo2[i]){
                printf("%s\n", tipo1);
                printf("%s\n", tipo2);
                break;
            } else if(tipo1[i] > tipo2[i]){
                printf("%s\n", tipo2);
                printf("%s\n", tipo1);
                break;
            } else {
                while(tipo1[i] == tipo2[i]){
                    if(tipo1[i + 1] > tipo2[i + 1]){
                        printf("%s\n", tipo2);
                        printf("%s\n", tipo1);
                        break;
                    } else if(tipo1[i + 1] < tipo2[i + 1]){
                        printf("%s\n", tipo1);
                        printf("%s\n", tipo2);
                        break;
                    }
                    i++;
                }
            }
        }
    }

    return 0;
}