#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Digite um número de 1 a 20: \n");
    scanf("%d", &numero);
    printf("Seu número antecessor é: %d\n", numero - 1);
    printf("Seu número sucessor é: %d", numero + 1);
    return 0;
}