#include <stdio.h>
#include <locale.h>

int main(){
    int N;
    printf("Digite um n�mero de 1 a 10 positivo: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Por favor, digite um n�mero positivo.\n");
    } else {
        printf("N�meros naturais de 0 at� %d: \n", N);
        for (int i = 0; i <= N; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}