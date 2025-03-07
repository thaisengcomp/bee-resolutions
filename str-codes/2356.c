#include<stdio.h>
#include<string.h>

int resistencia(char str1[102], char str2[102]){
    int i, j, k, sim = 0;
    int ts1, ts2;

    ts1 = strlen(str1);
    ts2 = strlen(str2);

    for(i=0; i<ts1; i++){
        if(str1[i] == str2[0]){//se str2 está contida em str1
            k=i+1;
            j=1;
            while(k < ts1 && j < ts2 && str1[k] == str2[j]){
                j++;
                k++;
            } 
            if(j==ts2){
                sim = 1;
            }
        }
    }
    return sim;
}

int main () {

    char str1[102], str2[102];

    while(scanf("%s\n%s", str1, str2) != EOF){

        if(resistencia(str1, str2) == 1){
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }

    }

    return 0;
}