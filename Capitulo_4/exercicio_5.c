#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    double numero;
    printf("Digite um n�mero: ");
    scanf("%lf", &numero);
    if (numero > 0) {
        printf("O n�mero %.2lf ao quadrado �: %.2lf \n", numero, numero * numero);
        printf("A raiz quadrada de %.2lf �: %.2lf \n", numero, sqrt(numero));
    } else {
        printf("N�mero n�o � positivo. \n");
    }
    return 0;
}