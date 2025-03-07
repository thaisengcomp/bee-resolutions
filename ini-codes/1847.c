#include<stdio.h>

int main(){

    int d1, d2, d3;

    scanf("%d %d %d", &d1, &d2, &d3);

    if(d1 > d2 && (d2  <= d3)){
        printf(":)\n");
    } else if (d1 < d2 && (d2 >= d3)){
        printf(":(\n");
    } else if ((d1 < d2 && d2 < d3) && ((d3-d2) < (d2-d1))){
        printf(":(\n");
    } else if ((d1 < d2 && d2 < d3) && ((d3-d2) >= (d2 - d1))){
        printf(":)\n");
    } else if ((d1 > d2 && d2 > d3) && ((d2-d3) < (d1-d2))){
        printf(":)\n");
    } else if ((d1 > d2 && d2 > d3) && ((d2-d3) >= (d1-d2))){
        printf(":(\n");
    } else if ((d1 == d2) && (d3 > d2)){
        printf(":)\n");
    } else if ((d1 == d2) && (d3 <= d2)){
        printf(":(\n");
    }

    return 0;
}