#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float k, m;
    printf("Digite uma velocidade em KM/H:  \n");
    scanf(" %f", &k);
    m = k / 36;
    printf("\n A velocidade convertida em M/S é: %.2f \n", m);
    return 0;
}