#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, complemento;
    printf("Digite um número de 1 a 100: \n");
    scanf("%d", &num);
    complemento = ~num;
    printf("\n Número que você digitou: %d \n", num);
    printf("\n Complemento do número bit a bit: %d \n", complemento);
    return 0;
}