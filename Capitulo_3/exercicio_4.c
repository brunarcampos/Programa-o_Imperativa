#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float primeiro, segundo, terceiro, quarto, media;
    printf("Digite quatro números do tipo float separados por espaços: \n");
    scanf(" %f %f %f %f", &primeiro, &segundo, &terceiro, &quarto);
    media = (primeiro + segundo + terceiro + quarto) / 4;
    printf("A média aritmética dos valores digitados é: %.2f \n", media);
    return 0;
}