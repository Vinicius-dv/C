#include <stdio.h>
//Pesquisa linear melhorada
int main(void){
    int arr_num[] = {1,2,3,4,5,6,7,8,9,10};
    int n_user = 3;
    int i = (sizeof(arr_num)/sizeof(arr_num[0]))/2;
    if(i<=n_user){
        while(i<sizeof(arr_num)/sizeof(arr_num[0])){
            if(arr_num[i]==n_user){
                printf("Voce chegou ao seu numero começando do meio e indo para direita");
                break;
            }
            i++;
        }
    }else{
         while(i>0){
            if(arr_num[i]==n_user){
                printf("Voce chegou ao seu numero começando do meio e indo para esquerda");
                break;
            }
            i--;
        }
    }
}