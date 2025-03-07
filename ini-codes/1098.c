#include <stdio.h>

int main (){

    float i, j;
    int k;

    i = 0.0000000; //dados do tipo float possuem uma pequena margem de erro,
                    //então devemos considerar essa margem na manipulação dos dados

    while(i <= 2.0001){
        j=1;
        for(k=0; k<3; k++){
            if(i < 0.0001 || (i > 0.9999 && i < 1.0001) || (i > 1.9999 && i < 2.0001)){
                printf("I=%.0f J=%.0f\n", i, j+i);
            } else {
                printf("I=%.1f J=%.1f\n", i, j+i);
            }
            j++;
        }
        i+=0.2000000;
    }

    return 0;
}