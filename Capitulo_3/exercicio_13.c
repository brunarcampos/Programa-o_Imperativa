#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float catetoA, catetoB, hipotenusaH;
    printf("Digite o valor do cateto A de um triângulo: \n");
    scanf("%f", &catetoA);
    printf("\n Digite o valor do cateto B de um triângulo: \n");
    scanf("%f", &catetoB);
    hipotenusaH = sqrt(catetoA * catetoA + catetoB * catetoB);
    printf("\n Aqui está o valor da hipotenusa: %.2f \n", hipotenusaH);
    return 0;
}