#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("FIM!\n");
    return 0;
}