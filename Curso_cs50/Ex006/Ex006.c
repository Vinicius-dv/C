#include <stdio.h>
int main(void){
    int n1;
    int n2;
    printf("Vamos jogar par ou impar,escolha o valor de n1");
    scanf("%i",&n1);
    printf("Vamos jogar par ou impar,escolha o valor de n2");
    scanf("%i",&n2);
    printf(n1%n2==0?"Deu par":"Deu impar");
    return 0;
}