#include <stdio.h>

int main () {

    int m, ans;

    scanf("%d", &m);

    /*o proprio enunciado diz quanto vale cada parte
    para valores acima de 100*/

    if(m <= 10){
        ans = 7;
    } else if(m <= 30){
        ans = 7 + ((m - 10) * 1);
    } else if (m <= 100){
        ans = 7 + 20 + ((m - 30) * 2);
    } else {
        ans = 7 + 20 + 140 + ((m - 100) * 5);
    }

    printf("%d\n", ans);

    return 0;
}