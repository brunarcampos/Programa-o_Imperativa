#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;
    printf("Digite o primeiro n�mero de 1 a 100: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero de 1 a 100: ");
    scanf("%d", &num2);
    int xor_result = num1 ^ num2; 
    int or_result = num1 | num2;   
    int and_result = num1 & num2; 
    printf("\n Resultado da opera��o do OU Exclusivo (XOR): %d\n", xor_result);
    printf("\n Resultado da opera��o do OU Bit a Bit (OR): %d\n", or_result);
    printf("\n Resultado da opera��o do E Bit a Bit (AND): %d\n", and_result);
    return 0;
}