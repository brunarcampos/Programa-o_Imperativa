#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numero, soma = 0, contagem = 0;
    float media;
    printf("Digite 10 n�meros 1 a 50 positivos:\n");
    for (int i = 0; i < 10; ) { 
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numero);
        if (numero > 0) {
            soma += numero;
            contagem++;
            i++; 
        } else {
            printf("Por favor, digite apenas n�meros positivos.\n");
        }
    }
    media = (float)soma / contagem;
    printf("A m�dia dos n�meros positivos �: %.2f\n", media);
    return 0;
}