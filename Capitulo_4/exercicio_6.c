#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float altura, peso;
    char sexo;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu sexo (F ou M): ");
    scanf(" %c", &sexo);
    if (sexo == 'M' || sexo == 'm') {
        peso = (72.7 * altura) - 58;
        printf("O peso ideal para um homem de %.2f metros é: %.2f kg\n", altura, peso);
    } else if (sexo == 'F' || sexo == 'f') {
        peso = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher de %.2f metros é: %.2f kg\n", altura, peso);
    } else {
        printf("Sexo inválido. Por favor, insira 'M' ou 'F'.\n");
    }

}