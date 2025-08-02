#include <stdio.h>
#include <math.h>
int main(){
    double n_lhamas = 100.00;
    double meta_lhamas = 2000.00;
    int anos = 0;
    if(n_lhamas>meta_lhamas){
        printf("O numero de lhamas é maior que a meta");
    }else{
        while(n_lhamas<meta_lhamas){
            double crescimento_populacional = (n_lhamas/3)-(n_lhamas/4);
            n_lhamas+=crescimento_populacional;
            anos++; 
        }
        printf("Sua meta bateu em %d ",anos);
        printf("anos\n");
        printf("A populacao chegou em %2.f",round(n_lhamas));
    }
    return 0;
}