#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;
    printf("\n Digite o primeiro n�mero: \n");
    scanf("%d", &num1);
    printf("\n Digite o segundo n�mero: \n");
    scanf("%d", &num2);
    if (num1 > num2) {
        printf("\n O maior n�mero �: %d \n", num1);
    } else if (num2 > num1) {
        printf("\n O maior n�mero �: %d \n", num2);
    } else {
        printf("\n Os dois n�meros s�o iguais.\n");
    }
    return 0;
}