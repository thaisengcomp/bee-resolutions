#include<stdio.h>

void crescente(int *a, int *b, int *c){
    int temp;
    if (*a > *b) {temp = *a; *a = *b; *b = temp;}
    if (*b > *c) {temp = *b; *b = *c; *c = temp;}
    if (*a > *b) {temp = *a; *a = *b; *b = temp;}
}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    crescente(&a, &b, &c);

    if(b == c){
        printf("S\n");
    } else if (a == b){
        printf("S\n");
    } else if (a+b < c || a+b > c){
        printf("N\n");
    } else if (a+b == c){
        printf("S\n");
    }

    return 0;
}