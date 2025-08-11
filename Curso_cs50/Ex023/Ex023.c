#include <stdio.h>
int main(){
    int TAM = 10;
    int NUM[TAM];
    int aux;
    printf("Digite 10 numeros para ser colocado no array");
    for(int i=0;i<TAM;i++){
        scanf("%d",&NUM[i]);
    }
    printf("Sua ordem atual é de\n");
    for(int i=0;i<TAM;i++){
        printf("%d\n",NUM[i]);
    }

    for(int contador = 1;contador<TAM;contador++){
        for(int i = 0;i<TAM-1;i++){
            if(NUM[i]>NUM[i+1]){
                aux = NUM[i];
                NUM[i] = NUM[i+1];
                NUM[i+1] = aux;
            }
        }
    }
    printf("Sua ordem organizada é de\n");
    for(int i=0;i<TAM;i++){
        printf("%d\n",NUM[i]);
    }
}


