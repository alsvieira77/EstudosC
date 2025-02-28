#include <stdio.h>

int main(){
    int a = 10, b = -5;

    if ( a > 0 || b > 0) {
        printf("pelo menos um dos numeros é positivo");
    } else {
        printf("os 2 numeros são negativos");
    }
}