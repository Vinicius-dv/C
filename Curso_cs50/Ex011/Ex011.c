#include <stdio.h>
#include <math.h>
int main() {
    double raio = 100.64;
    double n = 3.14159;
    double elevar = pow(raio,2);
    double area = n*elevar;
    printf("A=%.4f\n",area);
    return 0;
}