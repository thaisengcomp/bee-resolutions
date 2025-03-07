#include <stdio.h>

int main () {

    int n_espacos, c_carimbadas, m_compradas, i, j, faltam;
    int x[50], y[300], tem_carimbada[50] = {0};

    scanf("%d %d %d", &n_espacos, &c_carimbadas, &m_compradas);

    faltam = c_carimbadas;

    for(i = 0; i < c_carimbadas; i++){
        scanf("%d", &x[i]);
    }

    for(i = 0; i < m_compradas; i++){
        scanf("%d", &y[i]);
    }

    for(i = 0; i < m_compradas; i++){
        for(j = 0; j < c_carimbadas; j++){
            if(x[j] == y[i] && !tem_carimbada[j]){ //compara as compradas (loop i) com as carimbadas (loop j)
                tem_carimbada[j] = 1;
                faltam--;
                break;// não compara mais com a carimbada achada
            }
        }
    }

    printf("%d\n", faltam);

    return 0;
}