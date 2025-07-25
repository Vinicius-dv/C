#include <stdio.h>

void meow(int param);

int main(void){
    meow(2);
    return 0;
}

void meow(int param){
    for(int i=0;i<param;i++){
        printf("meow\n");
    }
}