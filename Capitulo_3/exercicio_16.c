#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero, multi, divisao;
    printf("Digite um número de 1 a 100: ");
    scanf("%d", &numero);
    multi = numero << 1;
    divisao = numero >> 1;
    printf("\n Multiplicado por 2 com operadores bits: %d \n", multi);
    printf("\n Dividido por 2 com operadores bits: %d \n", divisao);
    return 0;
}