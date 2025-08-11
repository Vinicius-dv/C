#include <stdio.h>
int main(void){
    const int TAM = 10;
    int num[TAM];
    int aux;
    printf("Digite uma sequencia de 10 numeros por favor");
    for(int i=0;i<TAM;i++){
        scanf("%d",&num[i]);
    }
    printf("Sua sequencia e\n");
    for(int i=0;i<TAM;i++){
        printf("%d\n",num[i]);
    }
    
    for(int contador=1;contador<TAM;contador++){
        for(int i=0;i<TAM-1;i++){
            if(num[i]>num[i+1]){
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;
            }
        }
    }
    printf("Sua sequencia ordenada\n");
    for(int i=0;i<TAM;i++){
        printf("%d\n",num[i]);
    }

    /*for(int i=0;i<8;i++){
        for(int l=0;l<i;l++){
            printf("#");
        }
        printf("\n");
    }*/
    return 0;
}