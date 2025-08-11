#include <stdio.h>
int main(void){
    int c_peca_1,n_peca_1;
    double v_peca_1;
    scanf("%d\n %d\n",&c_peca_1,&n_peca_1);
    scanf("%lf\n",&v_peca_1);
    int c_peca_2,n_peca_2;
    double v_peca_2;
    scanf("%d\n %d\n",&c_peca_2,&n_peca_2);
    scanf("%lf\n",&v_peca_2);
    double soma_peca_1 = n_peca_1*v_peca_1;
    double soma_peca_2 = n_peca_2*v_peca_2;
    double valor_final = soma_peca_1+soma_peca_2;
    printf("%.2lf",valor_final);
    return 0;
}