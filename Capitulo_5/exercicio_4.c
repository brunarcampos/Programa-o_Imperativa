#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int count = 0; 
    int numero = 3; 
    printf("Os cinco primeiros m�ltiplos de 3 s�o:\n");
    while (count < 5) {
        printf("%d ", numero);
        numero += 3;  
        count++;     
    }
    printf("\n");
    return 0;
}