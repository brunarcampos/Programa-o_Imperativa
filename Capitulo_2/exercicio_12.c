#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    const int mes_atual = 4;
    printf("O m�s em que estamos �: %d\n", mes_atual);
    return 0;
}