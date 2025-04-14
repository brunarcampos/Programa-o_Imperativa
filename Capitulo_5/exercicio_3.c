#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int N;
    printf("Digite um número de 1 a 50: ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Por favor, digite um número positivo.\n");
    } else {
        printf("Os primeiros %d números naturais ímpares são:\n", N);
        int count = 0;
        for (int i = 1; count < N; i++) {
            if (i % 2 != 0) { 
                printf("%d ", i);
                count++; 
            }
        }
        printf("\n");
    }
    return 0;
}