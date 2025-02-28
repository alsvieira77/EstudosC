#include <stdio.h>

int main (){
    int a = 10, b = -5;

    // Operador logico "E ou AND" &&
    if (a > 0 && b > 0){
        printf("os 2 numeros são positivos\n");
    } else {
        printf("pelo menos um dos 2 numeros é negativo \n");
    }

}