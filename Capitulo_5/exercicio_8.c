#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numeros[10];
    int soma = 0;
    float media;
    printf("Digite 10 n�meros de 1 a 100:\n");
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    media = soma / 10.0;
    printf("A m�dia dos n�meros �: %.2f\n", media);
    return 0;
}