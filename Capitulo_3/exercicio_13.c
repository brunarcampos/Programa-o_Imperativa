#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float catetoA, catetoB, hipotenusaH;
    printf("Digite o valor do cateto A de um tri�ngulo: \n");
    scanf("%f", &catetoA);
    printf("\n Digite o valor do cateto B de um tri�ngulo: \n");
    scanf("%f", &catetoB);
    hipotenusaH = sqrt(catetoA * catetoA + catetoB * catetoB);
    printf("\n Aqui est� o valor da hipotenusa: %.2f \n", hipotenusaH);
    return 0;
}