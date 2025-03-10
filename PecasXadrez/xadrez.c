#include <stdio.h>

int main(){

        int i;

        // Movimentação da torre - 5 casas para a direita
        printf("Movimentação da Torre: \n");
        for (i = 0; i < 5; i++){ // i assume o valor de 0 para iniciar a movimentação e incrementa uma casa enquanto o valor for < 5
            printf("Direita \n"); // Imprimimos na tela a quantidade de movimentos e a direção
        }

        // Movimentação do bispo - 5 casas na diagonal para cima e à direita
        printf("\nMovimentação da Bispo: \n");
        i = 0; // novamente i assume o valor de 0 para inciar a movimentação
        while (i < 5){ // enquanto i for menor que 5 ele ira imprimir na tela os movimentos da rainha
            printf("Cima, Direita\n");
            i++; // incremento do "i" em 1 até que ele se torne > 5 a ação termine
        }

        // Movimentação da rainha - 8 casas para a esquerda
        printf("\nMovimentação da Rainha"); 
        i = 0; // i assume o valor de 0 para iniciar a movimentaçao
        do { // Do executa o codigo até atingir o valor de while
            printf("\nEsquerda");
            i++; // Incremento para induzir o final do loop        
        } while (i < 8); // enquanto i < 8 a peça continua se movimentando 

        // Movimentação do cavalo - 2 casas para baixo e uma para a esquerda

        int movimentoCavalo = 1;
        
        printf("\n");
        printf("\nMovimentação do Cavalo\n");
        while (movimentoCavalo--) { // enquanto movimentoCavalo for maior que 0, o loop continua

            for (int i = 0; i < 2; i++) { // loop para movimentar o cavalo 2 casas para baixo
                printf("Baixo\n"); // imprime "Baixo" para cada movimento para baixo
            }

            printf("Direita\n"); // após mover 2 casas para baixo, move 1 casa para a direita
        }

    
        return 0;
}