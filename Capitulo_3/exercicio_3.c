#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int primeiro, segundo, terceiro, soma;
    printf("Digite três número de 1 a 50 e os separe com espaços: \n");
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);
    soma = primeiro + segundo + terceiro;
    printf("A soma dos três números que você digitou é: %d \n", soma);
    return 0;
}