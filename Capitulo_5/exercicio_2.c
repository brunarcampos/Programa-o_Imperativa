#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int N;
    printf("Digite um número de 1 a 50 positivo: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        printf("Números naturais de %d até 0: \n", N);
        for (int i = N; i >= 0; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}