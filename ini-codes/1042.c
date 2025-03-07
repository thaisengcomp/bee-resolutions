#include<stdio.h>

    int main(){

        int a, b, c;

        scanf("%d%d%d", &a, &b, &c);

        //a eh o menor e c o maior
        if (a < b && b < c){
            printf("%d\n", a);
            printf("%d\n", b);
            printf("%d\n", c);
        //a eh o menor e b o maior
        } else if (a < c && c < b){
            printf("%d\n", a);
            printf("%d\n", c);
            printf("%d\n", b);
        //b eh o menor e c o maior   
        } else if (b < a && a < c){
            printf("%d\n", b);
            printf("%d\n", a);
            printf("%d\n", c);
        //c eh o menor e b o maior
        } else if (c < a && a < b){
            printf("%d\n", c);
            printf("%d\n", a);
            printf("%d\n", b);
        //c eh o menor e a o maior
        } else if (c < b && b < a){
            printf("%d\n", c);
            printf("%d\n", b);
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
            printf("%d\n", c);
            printf("%d\n", a);
        }

        printf("\n");
        printf("%d\n", a);
        printf("%d\n", b);
        printf("%d\n", c);

        return 0;
    }