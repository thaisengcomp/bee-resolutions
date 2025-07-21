#include <stdio.h>

int main () {

    int n, p, q, ans;
    char op;

    scanf("%d", &n);
    scanf("%d %c %d", &p, &op, &q);

    if(op == '+'){
        ans = p+q;
        if(ans > n){
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }
    } else if(op == '*'){
        ans = p*q;
        if(ans > n){
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }
    }

    return 0;
}