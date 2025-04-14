#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;
    printf("\n Digite o primeiro número: \n");
    scanf("%d", &num1);
    printf("\n Digite o segundo número: \n");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("\n O maior número é: %d \n", num1);
    } else if (num2 > num1) {
        printf("\n O maior número é: %d \n", num2);
    } else {
        printf("\n Os dois números são iguais.\n");
    }
    return 0;
}