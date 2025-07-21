#include <stdio.h>

int main () {

    int l, c, ans; //1 para brancas e 0 para pretas

    scanf("%d%d", &l, &c);

    if(((l%2 == 0) && (c%2 == 0)) || ((l%2 != 0) && (c%2 != 0))){
        ans = 1;
    } else {
        ans = 0;
    }

    printf("%d\n", ans);

    return 0;
}