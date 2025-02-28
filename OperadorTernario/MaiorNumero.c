#include <stdio.h>

int main(){
    int num1 = 10, num2 = 20;
    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    if (num1 > num2) {
        printf("o numero maior é: %d", num1);
    } else {
        printf("o numero maior é: %d", num2);
    }
    

return 0;
}