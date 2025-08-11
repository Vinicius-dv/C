#include <stdio.h>
//Orientacao a obj em c
typedef struct
    {
        char *nome;
        char *number_phone;
    } pessoa;
int main(void){
    pessoa Pessoa1;
    Pessoa1.nome = "Vinicius";
    Pessoa1.number_phone = "+5519581581";
    pessoa Pessoa2;
    Pessoa2.nome = "Leonardo";
    Pessoa2.number_phone = "+5591581515";
    return 0;
}