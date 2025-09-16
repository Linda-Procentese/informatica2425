/*es pag 223 n 17
scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza sullo schermo.
es: n=6 divisori=1,2,3 somma 1+2+3=6
(i primi tre numeri perfetti sono)
6-28-496*/
#include <stdio.h>
int main(){
int somma=0, num, div;
    for(num=1; num<500;num++){
        for(div=1; div<=num/2; div++){
            if(num%div==0){
              somma+=div;
                  
            }
            
        }
        if(somma==num)
                    printf("\n%d",num);
                somma=0;
    }
}