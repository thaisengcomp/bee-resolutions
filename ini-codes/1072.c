#include <stdio.h>

int main (){

    int n, x, i, in, out;

    scanf("%d", &n);

    in = 0;
    out = 0;
    i = 1;

    for(i = 1; i <= n; i++){
        scanf("%d", &x);
        if(x <= 20 && x >= 10){
            in += 1;
        } else {
            out += 1;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}