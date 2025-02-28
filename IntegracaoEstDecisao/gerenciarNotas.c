#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao){
    case 1:
    printf("Calcular a média\n");
    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota\n");
    scanf("%f", &nota2);
    // testar a condicação se a nota é >= 0 e <= 10
    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
        media = (nota1 + nota2) / 2;
        printf("A média é %.2f", media);
    } else {
        printf("entrada incorreta");
    }
    break;
    
    case 2:
    printf("Determinar Status\n");
    printf("Entrar com a média: ");
    scanf("%f", &media);
    // media >= 5 ? printf("APROVADO!\n") : printf("REPROVADO!\n");
    if (media >= 7){
        printf("Aprovado!");
    } else if (media >= 5) {
        printf("Recuperação!");
    } else {
        printf("Reprovado!");
    }
    break;

    case 3:
    printf("Saindo do programa...\n");
    break;

    default:
    printf("Opcao invalida");
    }
    
return 0;

}