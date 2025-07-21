#include <stdio.h>

int main () {

    int qtd_total, produto, p_comprado;
    int i;
    float total = 0;

    scanf("%d", &qtd_total);

    for(i = 0; i < qtd_total; i++){
        scanf("%d %d", &produto, &p_comprado);

        if(produto == 1001){
            total += (p_comprado * 1.50);
        } else if(produto == 1002){
            total += (p_comprado * 2.50);
        } else if(produto == 1003){
            total += (p_comprado * 3.50);
        } else if(produto == 1004){
            total += (p_comprado * 4.50);
        } else if(produto == 1005){
            total += (p_comprado * 5.50);
        }
    }

    printf("%.2f\n", total);

    return 0;
}