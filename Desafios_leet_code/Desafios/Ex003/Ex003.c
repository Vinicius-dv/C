#include <stdio.h>
int main(){
    int troco = 61;
    int moeda_25 = 0;
    int moeda_10 = 0;
    int moeda_5  = 0;
    int moeda_1  = 0;
    int l = troco;
    int i = 0;
    while(i<l){
        i++;
        if(troco>=25){
            troco-=25;
            moeda_25+=1;
        }else if(troco>=10 && troco<25){
            troco-=10;
            moeda_10 +=1;
        }else if(troco>=5 && troco<10){
             troco-=5;
             moeda_5+=1;
        }else if(troco>=1 && troco<5){
            troco-=1;
            moeda_1+=1;
        }
    }
    printf("Foram usados %d moedas de 25\n",moeda_25);
    printf("Foram usados %d moedas de 10\n",moeda_10);
    printf("Foram usados %d moedas de 5\n",moeda_5);
    printf("Foram usados %d moedas de 1\n",moeda_1);
    return 0;
}