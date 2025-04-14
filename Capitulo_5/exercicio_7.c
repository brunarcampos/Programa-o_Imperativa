#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    double valor, soma = 0;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o valor %d: ", i);
        scanf("%lf", &valor);  
        soma += valor;
    }
    printf("A soma dos valores digitados é: %.2lf\n", soma);
    return 0;
}
