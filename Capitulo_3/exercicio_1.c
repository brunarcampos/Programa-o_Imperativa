#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero;
    printf("Digite um n�mero de 1 a 20: \n");
    scanf("%d", &numero);
    printf("Seu n�mero antecessor �: %d\n", numero - 1);
    printf("Seu n�mero sucessor �: %d", numero + 1);
    return 0;
}