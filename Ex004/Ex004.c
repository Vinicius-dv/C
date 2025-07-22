#include <stdio.h>
int main(void){
    float n1;
    float n2;
    printf("vamos realizar novas somas meu amigo, digite o valor de n1");
    scanf("%f",&n1);
    printf("vamos realizar novas somas meu amigo, digite o valor de n2");
    scanf("%f",&n2);
    printf("A divisao desses numeros e %f\n",n1/n2);
    if(n1/n2 ==5){
        printf("Oh vc descobriu o misterio");
    }else{
        printf("Encontre a mensagem secreta fazendo uma soma, dica,essa mensagem pode ser encontrada dividindo o primeiro numero por 2");
    }
    return 0;
}