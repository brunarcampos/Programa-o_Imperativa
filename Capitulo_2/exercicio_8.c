#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    int primeiro, segundo;
    printf("\n Digite o primeiro número: \n");
    scanf("%d", &primeiro);
    printf("\n Digite o segundo número: \n");
    scanf("%d", &segundo);
    printf("\n Ordem inversa: %d e %d", segundo, primeiro);
    return 0;
}