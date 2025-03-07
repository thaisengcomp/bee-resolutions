#include <stdio.h>
#include <string.h>

int main () {

    char fala1[1003], fala2[1003];

    scanf("%s", fala1);
    getchar();
    scanf("%s", fala2);

    if(strlen(fala1) < strlen(fala2)){
        printf("no\n");
    } else {
        printf("go\n");
    }

    return 0;
}