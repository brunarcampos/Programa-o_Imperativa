#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float real, dolar, cotacao;
    printf("\n Digite o valor da cota��o do dolar de hoje: \n");
    scanf("%f", &cotacao);
    printf("\n Digite o valor em real: \n");
    scanf("%f", &real);
    dolar = real / cotacao;
    printf("\n O valor em d�lares �: US$ %.2f \n", dolar);
    return 0;
}