#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float altura, volume, raio;
    const float pi = 3.141592;
    printf("Digite a altura de um cilindro circular: \n");
    scanf("%f", &altura);
    printf("\n Digite o valor do raio do cilindro circular: \n");
    scanf("%f", &raio);
    volume = pi * raio * raio * altura;
    printf("\n O volume do cilindro circular é: %.2f \n", volume);
    return 0;
}
