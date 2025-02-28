#include <stdio.h>

int main(){

    int idade = 20;
    float altura = 1.75;

    // Idade >= 18 = verdadeiro
    // Idade <= 30 = verdadeiro
    // Verdadeiro && Verdadeiro 
    // Veradeiro && Altura > 1,70
    // Verdadeiro && Verdadeiro = verdadeiro

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada\n");
      } else {
        printf("Você não atende aos critérios\n");
      }
    
return 0;

}