#include <stdio.h>

int gcd(int a, int b){
    if(b == 0){
        return a;
    }

    return gcd(b,a%b);
}

int main () {

    int n, f1, f2, mdc;
    int i;

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d%d", &f1, &f2);

        mdc = gcd(f1,f2);

        printf("%d\n", mdc);
    }

    return 0;
}