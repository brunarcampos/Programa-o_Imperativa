#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int primeiro, segundo, terceiro, soma;
    printf("Digite tr�s n�mero de 1 a 50 e os separe com espa�os: \n");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);
    soma = primeiro + segundo + terceiro;
    printf("A soma dos tr�s n�meros que voc� digitou �: %d \n", soma);
    return 0;
}