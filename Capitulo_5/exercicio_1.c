#include <stdio.h>
#include <locale.h>

int main(){
    int N;
    printf("Digite um número de 1 a 10 positivo: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        printf("Números naturais de 0 até %d: \n", N);
        for (int i = 0; i <= N; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}