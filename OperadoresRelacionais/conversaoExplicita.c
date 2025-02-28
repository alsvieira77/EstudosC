#include <stdio.h>

int main(){

    float numero1 = 10.2;
    int numero2 = 10;

    //printf("numero 1 > numero 2: %d \n", numero1 > numero2);
    //printf("numero 1 == numero 2: %d \n", numero1 == numero2);

    printf("numero 1 > numero 2: %d \n", (int)numero1 > numero2); // usando casting para fazer uma convesão explicita para comparar com o numero inteiro
    printf("numero 1 == numero 2: %d \n", (int)numero1 == numero2);


return 0;



}