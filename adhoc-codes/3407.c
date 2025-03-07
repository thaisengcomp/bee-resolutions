#include <stdio.h>

int main () {

    int i, n_itens, m_bolinhos, item;
    int bol_n = 0, bol_s = 0;

    scanf("%d %d", &n_itens, &m_bolinhos);

    //entrada natan
    for(i = 1; i <= n_itens; i++){
        scanf("%d", &item);

        if(item == 1){
            bol_n += 1;
        }
    }

    //entrada samuel
    for(i = 1; i <= n_itens; i++){
        scanf("%d", &item);

        if(item == 1){
            bol_s += 1;
        }
    }

    if (bol_n == m_bolinhos){
        printf("Tudo certo.\n");
    } else if (bol_n != m_bolinhos && bol_s == m_bolinhos){
        printf("Pegou de Samuel.\n");
    } else {
        printf("Pegou de um estranho.\n");
    }

    return 0;
}