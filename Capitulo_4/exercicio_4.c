#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    #include <stdio.h>
    float salario, emprestimo;
    printf("Digite o salário do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestação do empréstimo: ");
    scanf("%f", &emprestimo);
    if (emprestimo > 0.20 * salario) {
        printf("Empréstimo não concedido.\n");
    } else {
        printf("Empréstimo concedido.\n");
    }
    return 0;
}