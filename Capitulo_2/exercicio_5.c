#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");
    float altura;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Sua altura é: %d", altura);
}