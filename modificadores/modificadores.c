#include <stdio.h>

int main() {
    /*
    int numeroSinal = 3000000000; //esse valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000; //esse valor excede o limite de um int normal

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);
    */

    /*
    int numeroNormal = 2147483647; // valor máximo de int
    long long int numeroGrande = 2147483647;

    printf("Numero normal: %d\n", numeroNormal);
    printf("Numero grande: %lld\n", numeroGrande);

    numeroGrande = 2147483648;
    printf("Numero grande atualizado (long int): %lld\n", numeroGrande);
    */
    
    /*double preciseNumber = 3.141592653589793;
    double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21lf\n", veryPreciseNumber);
    */

   
    /*
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long long int numeroGrande = 4000000000;
    int numero = 4000000000;

    printf("Numero grande positivo: %lu\n", numeroGrandePositivo);
    printf("Numero positivo: %u\n", numeroPositivo);
    printf("Numero grande: %lld\n", numeroGrande);
    printf("Numero: %d\n", numero);
    */

    /*short int numeroPequeno = 3267; // Valor máximo de short int
    printf("numero pequeno (short int): %d\n", numeroPequeno);

    numeroPequeno = 3268; // Valor maior que o maximo de short int
    printf("numero pequeno atualizado (short int): %d\n", numeroPequeno);
    */

    printf("***TAMANHO DAS VARIÁVEIS***\n");
    printf("short int: %lu B - int: %lu B - long long int: %lu B\n", sizeof(short int), sizeof(int), sizeof(long long int));
    printf("float: %lu B - double: %lu B - long double: %lu B", sizeof(float), sizeof(double), sizeof (long double));

    return 0;


}