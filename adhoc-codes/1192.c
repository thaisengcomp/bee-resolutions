#include<stdio.h>
#include<ctype.h>

int main () {

    int n1, n2, i, n;
    char car;

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        scanf("%d%c%d", &n1, &car, &n2);

        if(n1 == n2){
            printf("%d\n", n1*n2);
            continue;
        }

        if(isupper(car) != 0){
            printf("%d\n", n2-n1);
        } else {
            printf("%d\n", n1+n2);
        }
    }

    return 0;
}