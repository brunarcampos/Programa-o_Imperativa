#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    double valor;
    printf("Digite um valor cujo o tipo seja double: ");
    scanf("%lf", &valor);
    printf("\n Aqui está o valor em notação científica: %e \n");
    return 0;
}