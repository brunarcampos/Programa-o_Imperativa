#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float numero, parte;
    printf("Digite um n�mero tipo float: \n");
    scanf("%f", &numero);

    parte = numero / 5;

    printf("A quinta parte de %.2f � %.2f\n", numero, parte);
    return 0;
}