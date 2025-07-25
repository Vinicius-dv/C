#include <stdio.h>
#include <string.h>
int main(void){
    char contrato[50];
    printf("vc concorda ?");
    scanf("%s",&contrato);
    if(strcmp(contrato,"yes") == 0 || strcmp(contrato,"YES")==0){
        printf("Aceito");
    }else if(strcmp(contrato,"no") == 0 || strcmp(contrato,"NO") == 0){
        printf("negado");
    }else{
        printf("invalido");
    }
    return 0;
}