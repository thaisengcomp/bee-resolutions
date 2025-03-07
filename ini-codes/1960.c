#include<stdio.h>
#include<string.h>

int main (){

    char inteiro[5];
    int t;

    scanf("%s", inteiro);

    t = strlen(inteiro);

    if(t == 3){
        if(inteiro[0] == '1'){printf("C");} //centenas
        else if(inteiro[0] == '2'){printf("CC");}
        else if(inteiro[0] == '3'){printf("CCC");}
        else if(inteiro[0] == '4'){printf("CD");}
        else if(inteiro[0] == '5'){printf("D");}
        else if(inteiro[0] == '6'){printf("DC");}
        else if(inteiro[0] == '7'){printf("DCC");}
        else if(inteiro[0] == '8'){printf("DCCC");}
        else if(inteiro[0] == '9'){printf("CM");}

        if(inteiro[1] == '1'){printf("X");} //dezenas
        else if(inteiro[1] == '2'){printf("XX");}
        else if(inteiro[1] == '3'){printf("XXX");}
        else if(inteiro[1] == '4'){printf("XL");}
        else if(inteiro[1] == '5'){printf("L");}
        else if(inteiro[1] == '6'){printf("LX");}
        else if(inteiro[1] == '7'){printf("LXX");}
        else if(inteiro[1] == '8'){printf("LXXX");}
        else if(inteiro[1] == '9'){printf("XC");}

        if(inteiro[2] == '1'){printf("I");} //unidades
        else if(inteiro[2] == '2'){printf("II");}
        else if(inteiro[2] == '3'){printf("III");}
        else if(inteiro[2] == '4'){printf("IV");}
        else if(inteiro[2] == '5'){printf("V");}
        else if(inteiro[2] == '6'){printf("VI");}
        else if(inteiro[2] == '7'){printf("VII");}
        else if(inteiro[2] == '8'){printf("VIII");}
        else if(inteiro[2] == '9'){printf("IX");}
    }

    else if(t == 2){
        if(inteiro[0] == '1'){printf("X");} //dezenas
        else if(inteiro[0] == '2'){printf("XX");}
        else if(inteiro[0] == '3'){printf("XXX");}
        else if(inteiro[0] == '4'){printf("XL");}
        else if(inteiro[0] == '5'){printf("L");}
        else if(inteiro[0] == '6'){printf("LX");}
        else if(inteiro[0] == '7'){printf("LXX");}
        else if(inteiro[0] == '8'){printf("LXXX");}
        else if(inteiro[0] == '9'){printf("XC");}

        if(inteiro[1] == '1'){printf("I");} //unidades
        else if(inteiro[1] == '2'){printf("II");}
        else if(inteiro[1] == '3'){printf("III");}
        else if(inteiro[1] == '4'){printf("IV");}
        else if(inteiro[1] == '5'){printf("V");}
        else if(inteiro[1] == '6'){printf("VI");}
        else if(inteiro[1] == '7'){printf("VII");}
        else if(inteiro[1] == '8'){printf("VIII");}
        else if(inteiro[1] == '9'){printf("IX");}
    }

    else if(t == 1){ //so unidades
        if(inteiro[0] == '1'){printf("I");}
        else if(inteiro[0] == '2'){printf("II");}
        else if(inteiro[0] == '3'){printf("III");}
        else if(inteiro[0] == '4'){printf("IV");}
        else if(inteiro[0] == '5'){printf("V");}
        else if(inteiro[0] == '6'){printf("VI");}
        else if(inteiro[0] == '7'){printf("VII");}
        else if(inteiro[0] == '8'){printf("VIII");}
        else if(inteiro[0] == '9'){printf("IX");}
    }

    printf("\n");

    return 0;
}