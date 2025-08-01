#include <stdio.h>
int main(void){
    double n_lhamas = 100;
    double meta_lhamas = 2000.00;
    int anos = 0;
    if(n_lhamas>meta_lhamas){
          printf("Numero de lhamas maior que a meta");
     }else{
        while(n_lhamas<meta_lhamas){
         double fator_crescimento = (n_lhamas/3.0) - (n_lhamas/4.0);
         n_lhamas += fator_crescimento;
         anos+=1;
        }
         printf("Ano %i\n",anos);
         printf("A populacao cresceu %2.f\n",n_lhamas);
     }
    return 0;
}