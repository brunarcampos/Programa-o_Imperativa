#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int inteiro;
    scanf("%d", &inteiro);
    printf("Valor lido: %d", inteiro);
    return 0;
}