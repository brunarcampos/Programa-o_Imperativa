#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, complemento;
    printf("Digite um n�mero de 1 a 100: \n");
    scanf("%d", &num);
    complemento = ~num;
    printf("\n N�mero que voc� digitou: %d \n", num);
    printf("\n Complemento do n�mero bit a bit: %d \n", complemento);
    return 0;
}