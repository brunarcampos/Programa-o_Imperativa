#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float tempF, tempC;
    printf("Digite uma temperatura em graus Celsius: \n");
    scanf("%f", &tempC);
    tempF = tempC * (9.0 / 5.0) + 32.0;
    printf("\n A temperatura convertida para Fahrenheit é: %.2f°F\n", tempF);
    return 0;
}