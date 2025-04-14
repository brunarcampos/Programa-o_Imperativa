#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma = 0;
    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }
    printf("A soma dos 50 primeiros números pares é: %d\n", soma);
    return 0;
}