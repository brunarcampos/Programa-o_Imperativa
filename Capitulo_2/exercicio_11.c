#include <stdio.h>
#include <locale.h>

# define taxa_cdi 14.15

int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("O valor da taxa CDI �: %.4f", taxa_cdi);
    return 0;
}