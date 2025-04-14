#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero, primeiro, segundo, terceiro, invertido;
    printf("Digite um n�mero de 100 a 999: \n");
    scanf("%d", &numero);
    if (numero < 100 || numero > 999) {
        printf("\n N�mero incorrete, o n�mero digitado deve conter tr�s digitos. \n");
        return 1;
    }
    primeiro = numero / 100;
    segundo = (numero % 100) / 10;
    terceiro = numero % 100;
    invertido = terceiro * 100 + segundo * 10 + primeiro;
    printf("\n O n�mero invertido �: %d \n");
    return 0;
}
