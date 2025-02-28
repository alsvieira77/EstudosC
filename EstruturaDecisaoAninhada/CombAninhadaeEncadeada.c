#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0){
            printf("numero par\n");
        } else {
            printf("numero impar\n");
        }
    } else if (numero == 0) {
        printf("Numero é 0");
    } else {
        printf("negativo");
    }
}