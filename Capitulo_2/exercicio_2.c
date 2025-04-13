#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int inteiro;
    printf("Digite um número de 1 a 20: \n");
    scanf("%d", &inteiro);
    printf("\n O número inteiro é: %d", inteiro);
    return 0;
}