#include <stdio.h>

int main() {
  int numero = 5, resultado;

  resultado = numero % 2;

  printf("a variável resultado é: %d \n", resultado);

  if (resultado != 0) {
    printf("O número é impar \n");
  }

  return 0;
}
