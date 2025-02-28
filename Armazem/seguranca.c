#include <stdio.h>

int main (){
    
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Insira a temperatura: ");
    scanf("%f", &temperatura);

    printf("Insira a umidade: ");
    scanf("%f", &umidade);

    printf("insira o nivel do estoque: \n");
    scanf("%u", &estoque);

    if (temperatura >= 30){
        printf("\nCUIDADO A TEMPERATURA ESTA ALTA \n");
    } else {
        printf("A TEMPERATURA ESTÁ OK \n");
    }

    if (umidade >= 50){
        printf("A UMIDADE ESTÁ ELEVADA \n");
    } else {
        printf("A UMIDADE ESTÁ OK \n");
    }
    
    if (estoque <= estoqueMinimo){
        printf("ABASTECER ESTOQUE \n");
    } else {
        printf("O ESTOQUE ESTA OK \n");
    }


return 0;

}