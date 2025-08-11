#include <stdio.h>
#include <math.h>
int main(void){
    int arr[7] = {1,2,3,4,5,6,7};
    int tamanho = sizeof(arr)/sizeof(arr[0]);
    int metade_arr = floor(arr[tamanho-1]/2);
    int num_porta = 0;
    int i = 0;
    if(num_porta<=metade_arr){
        while(i<tamanho){
            if(i==num_porta){
                printf("Voce chegou");
            }
            i++;
        }
    }else{
        i=arr[tamanho-1];
        while(i>0){
            if(i==num_porta){
                printf("Voce chegou");
            }
            i--;
        }
    }
    return 0;
}