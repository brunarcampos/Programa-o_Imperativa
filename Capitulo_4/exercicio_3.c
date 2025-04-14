#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um número de 1 a 100: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\n O número %d é PAR.\n", num);
    } else {
        printf("\n O número %d é ÍMPAR.\n", num);
    }
    return 0;
}