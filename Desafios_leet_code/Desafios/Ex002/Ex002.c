#include <stdio.h>
int main(){
   int altura = 8;
   for(int i =0;i<altura;i++){
    for(int k=0;k<altura-i;k++){
        printf(" ");
    }
    for(int j=0;j<i;j++){
        printf("#");
    }
    printf("  ");
    for(int j=0;j<i;j++){
        printf("#");
    }
    printf("\n");
   } 
    return 0;
}