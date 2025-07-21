#include <stdio.h>

int main () {

    int n1, n2;
    double d1, d2, v1, v2;

    scanf("%d%lf%lf", &n1, &d1, &v1);
    scanf("%d%lf%lf", &n2, &d2, &v2);

    if ((d1 * 3600 / v1) > (d2 * 3600 / v2)) {
        printf("%d\n", n2);
    } else {
        printf("%d\n", n1);
    }    

    return 0;
}