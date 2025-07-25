#include <stdio.h>
int main(void){
    int n1;
    int n2;
    printf("Vamos praticar um pouco mais,digite o valor de n1");
    scanf("%i",&n1);
    printf("Vamos praticar um pouco mais,digite o valor de n2");
    scanf("%i",&n2);
    int soma = n1+n2;
    printf("a soma entre esses numeros e %i\n",soma);
    if(n1>n2){
        printf("n1 e maior que n2");
    }else if(n1<n2){
        printf("n1 e menor que n2");
    }else{
        printf("os numeros sao iguais");
    }
    return 0;
}