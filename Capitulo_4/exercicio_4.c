#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    #include <stdio.h>
    float salario, emprestimo;
    printf("Digite o sal�rio do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da presta��o do empr�stimo: ");
    scanf("%f", &emprestimo);
    if (emprestimo > 0.20 * salario) {
        printf("Empr�stimo n�o concedido.\n");
    } else {
        printf("Empr�stimo concedido.\n");
    }
    return 0;
}