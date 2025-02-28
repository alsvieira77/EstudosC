// Utilizado para loops de tamanho específico
// Ideal quando sabemos quantas vezes será executado

/*
for (inicialização; condição; incremento) {
  código
}
*/

// Define valor inicial
// Condição booleana
// Incremento ou decremento

// Inicializa somente uma vez
// Condição: toda execução
// Incremento: no final da execução

#include <stdio.h> 

int main(){

    for (int i = 1; i <= 5; i++) {
       printf("%d\n", i);
    }

    return 0;

}

// Fácil de ler e entender
// Número fixo de execuções
// Uso de condicionais
// Incremento ou decremento