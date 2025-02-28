#include <stdio.h>

int main(){

    float nota1, nota2, nota3;
    float media;

    printf("***PROGRAMA PARA CALCULAR A MÉDIA***\n");

    printf("Digite sua a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite sua a terceira nota: \n");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("Sua média é: %.2f\n", media);


return 0;
}