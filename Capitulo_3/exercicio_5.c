#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int idade, ano_atual, ano_nascimento;
    printf("\n Digite a sua idade: \n");
    scanf(" %d", &idade);
    printf("\n Digite o ano que estamos: \n");
    scanf(" %d", &ano_atual);
    ano_nascimento = ano_atual - idade;
    printf("\n Seu ano de nascimento é: %d \n", ano_nascimento);
    return 0;
}