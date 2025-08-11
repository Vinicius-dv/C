#include <stdio.h>
int main(void){
    int aux;
    int TAM = 10;
    int numeros[TAM];
    printf("Digite uma sequencia de 10 numeros\n");
    for(int i=0; i<TAM;i++){
        scanf("%d",&numeros[i]);
    }
    printf("Sua sequencia e ");
    for(int i=0;i<TAM;i++){
        printf("%d\n",numeros[i]);
    }
    for(int contador = 1;contador<TAM;contador++){
        for(int i=0;i<TAM-1;i++){
            if(numeros[i]>numeros[i+1]){
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        } 
    }
    printf("Sua sequencia ordenada e ");
    for(int i=0;i<TAM;i++){
        printf("%d\n",numeros[i]);
    }
    return 0;
}