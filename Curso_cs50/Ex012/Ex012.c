#include <stdio.h>
int main(void){
    /*Desafio do crédito cs50
     cartões que vão ser usados: visa,mastercard,American express
     Padrões dos cartões:
     1 Visa: tem 13 ou 16 digitos,e começa com o 4
     2 Mastercard: tem 16 digitos, e normalmente começa com, 51 52 53 54 55
     3 American Express: tem 15 digitos, e normalmente começa com 34 ou 37
     Soma de verificação dos  cartões:
     1 vc pega todos os numeros da sequencia impar exemplo: 1324514154, eu vou pegar o: 1,2,5,4,5 ou seja ao total tem 10 numeros eu pego apenas a sequencia impar e multiplico cada numero que peguei por 2 exemplo: 2,4,10,8,10
     2 Passo pegar os numeros multiplicados e somar individualmente eles, exemplo:2+4+1+0+8+1+0
     3 Passo pegar os numeros par da sequencia do cartão ou seja os que sobraram e adicionar a eles o resultado de 2+4+1+0+8+1+0 que é:16, e somar os numeros novamente de forma individual no caso somar os numeros que sobraram e eu adicionei o 16, 3,4,1,1,4 foram os numeros restante mais 16 da 29 se o ultimo digito do numero do cartão for 0 o cartão é valido tá
    */
    int num_cartao_credito = {5,1,0,4,5,6,2,7,1,9,8,4,9,8,4,5};
    printf(num_cartao_credito);
    return 0;
}