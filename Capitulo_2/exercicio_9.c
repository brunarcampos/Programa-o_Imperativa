#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    float num1, num2;
    printf("Digite dois n�meros do tipo float separados por um espa�o: ");
    scanf("%f %f", &num1, &num2 );
    printf("\n Ordem inversa: %.2f e %.2f \n", num2, num1);
    return 0;
}