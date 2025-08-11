#include <stdio.h>

int main(void){
    int NUM_F;
    int HORAS_T;
    double S;
    scanf("%d\n %d\n %lf",&NUM_F,&HORAS_T,&S);
    double soma = HORAS_T*S;
    printf("NUMBER = %d\n",NUM_F);
    printf("SALARY = U$ %.2lf\n",soma);
    return 0;
}