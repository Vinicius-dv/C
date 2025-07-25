#include <stdio.h>
int calcular_area(int base,int altura){
    int area = base*altura;
    return area;
}
int main(void){
    int base_f;
    int alt_f;
    printf("Vamos calcular a area de um quadrado ou retangulo,digite a base desse obj");
    scanf("%i",&base_f);
    printf("digite a altura desse obj");
    scanf("%i",&alt_f);
    int res_f = calcular_area(base_f,alt_f);
    printf("A area desse obj e:%i",res_f);
    return 0;
}