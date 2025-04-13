#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    const int mes_atual = 4;
    printf("O mês em que estamos é: %d\n", mes_atual);
    return 0;
}