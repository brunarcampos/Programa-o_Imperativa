#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int dia;
    printf("Digite um n�mero entre 1 e 7: ");
    scanf("%d", &dia);
    switch (dia) {
        case 1:
            printf("Domingo \n");
            break;
        case 2:
            printf("Segunda-feira \n");
            break;
        case 3:
            printf("Ter�a-feira \n");
            break;
        case 4:
            printf("Quarta-feira \n");
            break;
        case 5:
            printf("Quinta-feira \n");
            break;
        case 6:
            printf("Sexta-feira \n");
            break;
        case 7:
            printf("S�bado \n");
            break;
        default:
            printf("N�mero inv�lido! Digite um n�mero entre 1 e 7. \n");
            break;
    }
    return 0;
}