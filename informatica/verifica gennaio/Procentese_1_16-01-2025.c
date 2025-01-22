/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/
#include <stdio.h>
int main(){
    int i, cnt=0,cnt1=0, div;
    for(i=0; i<500; i++){
        if(i%1==0 && i%i==0){
            for(div=1;div<=i/2; div++){
                if(i%div==0){
                    if(div==1 && div==i)
                        printf("il numero %d è un numero primo",i);
                }
                    
                
                }
            }
            
        
    }
}