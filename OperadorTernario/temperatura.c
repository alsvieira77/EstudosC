#include <stdio.h>

int main(){
    int temperatura = 28;
    int resultado;

    // temperatura > 30 ? printf("Está calor") : printf("Está frio");

    resultado = temperatura > 30 ? 1 : 0;
    
    if (resultado = 0){
        printf("Está calor");
    } else {
        printf("Está frio");
    }
}