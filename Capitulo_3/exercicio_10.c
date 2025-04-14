#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float valor_total = 780000.00;
    float ganhador1, ganhador2, ganhador3;
    ganhador1 = valor_total * 0.46;
    ganhador2 = valor_total * 0.32;
    ganhador3 = valor_total - (ganhador1 - ganhador2);
    printf("\n O primeiro ganhador receberá: R$ %.2f \n", ganhador1);
    printf("\n O segundo ganhador receberá: R$ %.2f \n", ganhador2);
    printf("\n O terceiro ganhador receberá: R$ %.2f \n", ganhador3);
    return 0;
}