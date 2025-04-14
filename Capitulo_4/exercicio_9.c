#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float altura, peso;
    char classificacao;
    printf("Digite a sua altura: \n");
    scanf("%f", &altura);
    printf("Digite o seu peso: \n");
    scanf("%f", &peso);
    if (altura < 1.20) {
        if (peso <= 60) {
            classificacao = 'A';
        } else if (peso <= 90) {
            classificacao = 'D';
        } else {
            classificacao = 'G';
        }
    } else if (altura <= 1.70) {
        if (peso <= 60) {
            classificacao = 'B';
        } else if (peso <= 90) {
            classificacao = 'E';
        } else {
            classificacao = 'H';
        }
    } else {
        if (peso <= 60) {
            classificacao = 'C';
        } else if (peso <= 90) {
            classificacao = 'F';
        } else {
            classificacao = 'I';
        }
    }
    printf("A sua classificação é: %c\n", classificacao);
    return 0;
}