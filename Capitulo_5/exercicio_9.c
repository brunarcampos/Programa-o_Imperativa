#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int numeros[10];
    int maior, menor;
    printf("Digite 10 n�meros de 1 a 100:\n");
    for (int i = 0; i < 10; i++) {
        printf("N�mero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }
    printf("O maior valor �: %d \n", maior);
    printf("O menor valor �: %d \n", menor);
    return 0;
}


