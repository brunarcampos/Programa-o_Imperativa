#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float radianos, graus;
    const float pi = 3.141592;
    printf("\n Digite um ângulo em graus: \n");
    scanf("%f", &graus);
    radianos = graus * pi / 180;
    printf("O ângulo convertido em radianos é: %.6f \n", radianos);
    return 0;
}