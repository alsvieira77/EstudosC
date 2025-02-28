#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-incremento (++a)
    Pós-incremento (a++)
    Decremento (--)
    Pré-decremento (--a)
    Pós-decremento (a--)    
    */

    int numero1 = 1, resultado;
    
    printf("antes do incremento: %d\n", numero1);
    // numero1++;
    // numero1 = numero1 + 1
    // numero1 += 1

    //pós incremento:
    //resultado = numero1;
    //numero1++
    resultado = numero1++;
    //printf("após o incremento: %d \n", numero1);
    printf("Após o pós-incremento - numero 1: %d - Resultado %d\n", numero1, resultado);
    
    resultado = ++numero1;
    printf("Após o pré-incremento: - Numero 1: %d - Resultado %d\n", numero1, resultado);
    //numero1--;
    // numero1 = numero1 - 1
    // numero1 -= 1
    //printf("após o decremento: %d \n", numero1);

    resultado = numero1--;
    printf("Após o pós-decremento: - Numero 1: %d - Resultado %d\n", numero1, resultado);
    
    resultado = --numero1;
    printf("Após o pré-decremento: - Numero 1: %d - Resultado %d\n", numero1, resultado);


}