#include <stdio.h>

int main () {

    int p1andar, p2andar, p3andar;
    int t1andar, t2andar, t3andar, menor;
    
    scanf("%d %d %d", &p1andar, &p2andar, &p3andar);

    /* cada funcionario leva 1 minuto para descer OU subir 
    um unico andar, entao 1 andar de diferença = 2 minutos e etc */
    t1andar = (2 * p2andar) + (4 * p3andar);
    t2andar = (2 * p1andar) + (2 * p3andar);
    t3andar = (4 * p1andar) + (2 * p2andar);

    menor = t1andar;
    if(t2andar < menor){
        menor = t2andar;
    }
    if(t3andar < menor){
        menor = t3andar;
    }

    printf("%d\n", menor);

    return 0;
}