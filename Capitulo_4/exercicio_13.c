#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    float num1, num2, resultado;
    printf("Escolha uma opera��o matem�tica:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    printf("Digite a op��o desejada (1-4): ");
    scanf("%d", &opcao);
    if (opcao < 1 || opcao > 4) {
        printf("Op��o inv�lida!\n");
        return 1;
    }
    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%f", &num2);
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2: 
            resultado = num1 - num2;
            printf("Resultado da subtra��o: %.2f\n", resultado);
            break;
        case 3: 
            resultado = num1 * num2;
            printf("Resultado da multiplica��o: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divis�o: %.2f\n", resultado);
            } else {
                printf("Erro: Divis�o por zero n�o � permitida.\n");
            }
            break;
        default:
            printf("Op��o inv�lida.\n");
            break;
    }
    return 0;
}