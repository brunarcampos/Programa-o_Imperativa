#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra;
    printf("Digite uma letra de A a Z: ");
    scanf(" %c", &letra);
    printf("Voc� digitou a letra: '%c' que tem como valor inteiro: %d", letra, letra);
    return 0;
}