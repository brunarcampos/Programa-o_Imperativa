#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um n�mero de 1 a 100: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\n O n�mero %d � PAR.\n", num);
    } else {
        printf("\n O n�mero %d � �MPAR.\n", num);
    }
    return 0;
}