#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Digite um n�mero de 1 a 50: ");
    scanf("%d", &numero);
    if ((numero % 3 == 0 && numero % 5 != 0) || (numero % 5 == 0 && numero % 3 != 0)) {
        printf("O n�mero %d � divis�vel por 3 ou 5, mas n�o simultaneamente pelos dois.\n", numero);
    } else {
        printf("O n�mero %d n�o atende � condi��o.\n", numero);
    }
    return 0;
}
