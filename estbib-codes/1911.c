#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[21];
    char assi[21];
} Alunos;

typedef struct{
    char nome[21];
    char assi[21];
} Presentes;

int main (){

    Alunos alunos[50];
    Presentes presentes[50];
    int i, j, k, l, n, m;
    int dif, ans;

    scanf("%d", &n);

    while(n != 0){

        getchar();

        dif = 0;
        ans = 0;

        for(i=0; i<n; i++){
            scanf("%s %s", alunos[i].nome, alunos[i].assi);
        }

        scanf("%d", &m);

        for(i=0; i<m; i++){
            getchar();
            scanf("%s %s", presentes[i].nome, presentes[i].assi);
        }

        for(k=0; k<n; k++){
            for(j=0; j<m; j++){
                if(strcmp(alunos[k].nome, presentes[j].nome) == 0){

                    dif = 0;

                    for(l=0; l<strlen(alunos[k].assi); l++){
                        if(alunos[k].assi[l] != presentes[j].assi[l]){
                            dif++;
                        }
                    }

                    if(dif > 1){
                        ans++;
                    }
                }
            }
        }

        printf("%d\n", ans);
        
        scanf("%d", &n);
    }

    return 0;
} /*4
Chaves ChAvEs
Kiko kikO
Nhonho NHONHO
Chiquinha CHIquinHa

3
Chaves ChAvEs
Kiko kIKO
Chiquinha CHIquinHA
2
Jadson jadsON
Crishna Crishna
2
Crishna CRISHNA
Jadson JADson
0*/
