#include <stdio.h>
#include <string.h>

int main () {

    char palavras[10000][101];
    char consultas[101];//prefixos
    int n_pal, q_con, i, j;
    int ans, maior;

    scanf("%d", &n_pal);

    while(n_pal != EOF){
        getchar();

        for(i=0; i<n_pal; i++){
            scanf("%s", palavras[i]);
        }

        scanf("%d", &q_con);
        getchar();

        for(i=0; i<q_con; i++){

            ans = 0;
            maior = 0;

            scanf("%s", consultas);

            for(j=0; j<n_pal; j++){
                if(strncmp(palavras[j], consultas, strlen(consultas)) == 0){
                    ans++;
                    if(strlen(palavras[j]) > maior){
                        maior = strlen(palavras[j]);
                    }
                }
            }

            if(ans < 1){
                printf("-1\n");
            } else {
                printf("%d %d\n", ans, maior);
            }
        }

        scanf("%d", &n_pal);
    }

    return 0;
}