#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra_maiuscula, letra_minuscula;
    printf("Digite uma letra maiúscula de A a Z: \n");
    scanf("%c", &letra_maiuscula);
    if (letra_maiuscula >= 'A' && letra_maiuscula <= 'Z') {
        letra_minuscula = letra_maiuscula + 32;
        printf("\n Convertendo para a letra minúscula: %c \n ", letra_minuscula);
    } else {
        printf("\n A letra digitada não é uma letra maiúscula. \n");
    }
    return 0;
}