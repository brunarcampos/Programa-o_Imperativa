#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    float valor;
    int numero;
    printf("Digite uma letra(A a Z), um preço de algo e um número( 1 a 10) e o separe por espaços: ");
    scanf(" %c %f %d", &letra, &valor, &numero);

    printf("\n Separados por espaços: \n");
    printf("\n %c %.2f %d \n", letra, valor, numero);

    printf("\n Separados por tabulação horizontal: \n");
    printf("%c \t %.2f \t %d", letra, valor, numero);

    printf("\n Separados um em cada linha: \n");
    printf("%c \n %.2f \n %d", letra, valor, numero);

    return 0;
}
