#include <stdio.h>

int main () {

    //v eh o valor inicial, valor vetor eh o valor f. impresso
    int n[1000], i, v, valor_vetor = 0; 

    scanf("%d", &v);

    for(i = 0; i < 1000; i++){

        n[i] = valor_vetor;
        valor_vetor += 1;
        
        if(valor_vetor == v){
            valor_vetor = 0;
        }
    }

    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}