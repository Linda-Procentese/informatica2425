/*es pag 223 n 17
scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza sullo schermo.
es: n=6 divisori=1,2,3 somma 1+2+3=6
(i primi tre numeri perfetti sono)
6-28-496*/
#include <stdio.h>
int main(){
    int n,div,somma=0;
    
    for(n=1;n<500;n++){
    for(div=1;div<=n/2;div++){
        if(n%div==0)
            somma+=div;
    }
        if(n==somma)
            printf("\nil numero %d è un numero perfetto",n);
        
        somma=0;
    }
}