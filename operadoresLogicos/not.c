#include <stdio.h>

int main(){
    /* 
    int a = 10;

    if (!a) { // (!(a>0))
        printf("a variavel é zero");
    } else{
        printf("a variável é diferente de 0");
    }
    */

    int a = 10;

    if (!(a > 0)) { // (!(a>0))
        printf("a variavel é negativa");
    } else{
        printf("a variável é positiva");
    }    
}