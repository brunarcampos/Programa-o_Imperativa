#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Digite um número de 1 a 50: ");
    scanf("%d", &numero);
    if ((numero % 3 == 0 && numero % 5 != 0) || (numero % 5 == 0 && numero % 3 != 0)) {
        printf("O número %d é divisível por 3 ou 5, mas não simultaneamente pelos dois.\n", numero);
    } else {
        printf("O número %d não atende à condição.\n", numero);
    }
    return 0;
}
