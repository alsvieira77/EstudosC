#include <stdio.h>

int main(){
    /*
    // variáveis do tipo inteiro
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferença = a - b;
    int produto = a * b;
    int quociente = a / b; // A divisão de inteiros resulta em um inteiro

    printf("soma = %d\n", soma);
    printf("diferença = %d\n", diferença);
    printf("produto = %d\n", produto);
    printf("quociente = %d\n", quociente);
    */

    /*
    //variáveis de ponto flutuante
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferença = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("soma = %.2f\n", soma);
    printf("diferença = %.2f\n", diferença);
    printf("produto = %.2f\n", produto);
    printf("quociente = %.2f\n", quociente);
    */

    // conversão entre tipos de dados
    /*
    //conversão implicita
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // a é convertido implicitamente para float

    printf("resultado = %.2f\n", resultado);
    */


    //conversão explicita

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // a é explicitamente convertido para float

    printf("Quociente = %.2f\n", quociente);

    return 0;




}