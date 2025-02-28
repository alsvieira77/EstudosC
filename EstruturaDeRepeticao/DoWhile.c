// Garante pelo menos uma vez a execução
// Variante do while
// condiçção ainda é boleana

/*
    do {
    // codigo
    } while

*/

#include <stdio.h>

int main(){
    
    int i; // Variavel de incremento
    printf("Insira um valor: ");
    scanf("%d", &i);

    do { // Entrada (1x pelo menos)
        printf("%d\n", i); // Saída impressa
        i++; // incremento
    } while (i == 5); // condição

    return 0;

    // Execução garantida
    // Util para solicitações de entrada do usuário
    // Util para menus interativos
    // Verificação de condição posterior
}