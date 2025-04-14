#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    double numero;
    printf("Digite um número: ");
    scanf("%lf", &numero);
    if (numero > 0) {
        printf("O número %.2lf ao quadrado é: %.2lf \n", numero, numero * numero);
        printf("A raiz quadrada de %.2lf é: %.2lf \n", numero, sqrt(numero));
    } else {
        printf("Número não é positivo. \n");
    }
    return 0;
}