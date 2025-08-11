#include <stdio.h>

int main(void){
    int n = 0;
    int arr[] = {4,6,8,2,7,5,0};
    int tamanho = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    if(n<tamanho/2){
        while(i<tamanho){
            if(arr[i]==n){
                printf("Você chegou no numero começando do primeiro");
                break;
            }
            i++;
        }
    }else if(n>tamanho/2){
       i = tamanho;
       while(i>0){
           if(arr[i]==n){
            printf("Você chegou ao numero começando do ultimo");
            break;
           }
           i--;
       }
    }else{
        printf("O seu numero tá no meio do arr, então nem precisa percorrer meu jovem");
    }
    return 0;
}