#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero, primeiro, segundo, terceiro, invertido;
    printf("Digite um número de 100 a 999: \n");
    scanf("%d", &numero);
    if (numero < 100 || numero > 999) {
        printf("\n Número incorrete, o número digitado deve conter três digitos. \n");
        return 1;
    }
    primeiro = numero / 100;
    segundo = (numero % 100) / 10;
    terceiro = numero % 100;
    invertido = terceiro * 100 + segundo * 10 + primeiro;
    printf("\n O número invertido é: %d \n");
    return 0;
}
