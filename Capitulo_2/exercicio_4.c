#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int inteiro;
    printf("Digite um número de 1 a 10: \n");
    scanf("%d", &inteiro);
    printf("O número que você digitou foi: %f", inteiro);
    return 0;
}

