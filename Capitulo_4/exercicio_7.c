#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float produto, final;
    char estado[4];
    printf("Digite o valor do produto: R$ ");
    scanf("%f", &produto);
    printf("Digite o estado de destino (MG, SP, RJ, MS): ");
    scanf("%s", estado);
    if (strcmp(estado, "MG") == 0) {
        final = produto * 1.07;  
        printf("Preço final para MG: R$ %.2f\n", final);
    } else if (strcmp(estado, "SP") == 0) {
        final = produto * 1.12; 
        printf("Preço final para SP: R$ %.2f\n", final);
    } else if (strcmp(estado, "RJ") == 0) {
        final = produto * 1.15;  
        printf("Preço final para RJ: R$ %.2f\n", final);
    } else if (strcmp(estado, "MS") == 0) {
        final = produto * 1.08;  
        printf("Preço final para MS: R$ %.2f\n", final);
    } else {
        printf("Erro: Estado inválido, tente novamente.\n");
    }
    return 0;
}