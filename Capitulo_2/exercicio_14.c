#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    char letra1, letra2, letra3;
    printf("Digite tr�s letras de A a Z com um espe�o entre elas:  ");
    scanf("%c %c %c", &letra1, &letra2, &letra3);
    printf("%c \n %c \n %c \n", letra1, letra2, letra3);
    return 0;
}