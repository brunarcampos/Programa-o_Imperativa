#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int dia, mes, ano;
    printf("Digite o dia, m�s e ano do seu nascimento separado por um espa�o: ");
    scanf("%d %d %d", &dia, &mes, &ano);
    printf("Sua data de nascimento:  %d\\%d\\%d\n", dia, mes, ano);
    return 0; 
}
