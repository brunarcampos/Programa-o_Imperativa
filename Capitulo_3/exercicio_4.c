#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float primeiro, segundo, terceiro, quarto, media;
    printf("Digite quatro n�meros do tipo float separados por espa�os: \n");
    scanf(" %f %f %f %f", &primeiro, &segundo, &terceiro, &quarto);
    media = (primeiro + segundo + terceiro + quarto) / 4;
    printf("A m�dia aritm�tica dos valores digitados �: %.2f \n", media);
    return 0;
}