#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float area_circulo, raio;
    const float pi = 3.141592;
    printf("Digite o valor do raio do c�rculo: \n");
    scanf("%f", &raio);
    area_circulo = pi * raio * raio;
    printf("\n A �rea do c�rculo �: %.6f \n");
    return 0;
}