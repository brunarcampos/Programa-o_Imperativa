#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num, deslocamento;
    int esq, dir;
    printf("Digite o n�mero que vai ser deslocado: ");
    scanf("%d", &num);
    printf("Digite o n�mero de posi��es para o deslocamento: ");
    scanf("%d", &deslocamento);
    esq = num << deslocamento; 
    dir = num >> deslocamento; 
    printf("\n Deslocamento para a esquerda (%d << %d): %d\n", num, deslocamento, esq);
    printf("\n Deslocamento para a  direita (%d >> %d): %d\n", num, deslocamento, dir);
    return 0;
}